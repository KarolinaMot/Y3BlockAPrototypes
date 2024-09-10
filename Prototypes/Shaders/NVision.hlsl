struct NVisionShader
{
    float3 GetColor(float2 uv)
    {

        float4 SceneTexture = SceneTextureLookup(uv, 14, false);

        return SceneTexture.rgb;
    }

    float3 VisionNumber(float strength, float2 uv, float time, float movementSpeed)
    {
        float offsetValue = sin(time * movementSpeed) * strength;
        float3 originalColor = GetColor(uv).rgb;
        int numSamples = 3;

        float2 offset1 = float2(offsetValue, offsetValue); // First offset
        float2 offset2 = float2(-offsetValue, -offsetValue); // Second offset (opposite direction)        

        float3 offsetResult = float3(0.f, 0.f, 0.f);
        offsetResult= GetColor(clamp(uv+offset1, float2(0.f, 0.f), float2(1.f, 1.f)));
        float2 offsettedUv = clamp(uv+offset2, float2(0.f, 0.f), float2(1.f, 1.f));
        offsetResult+= GetColor(offsettedUv);

        if(uv.x > 1 - strength || uv.x < 0+ strength || uv.y > 1 - strength || uv.y < 0+ strength )
        return originalColor;
        else
        return offsetResult/2;
    }
};

NVisionShader shader;
float2 uv = GetDefaultSceneTextureUV(Parameters, 14);
float4 color = float4(shader.VisionNumber(Strength, uv, Time, MovementSpeed), 1.f);
return color;