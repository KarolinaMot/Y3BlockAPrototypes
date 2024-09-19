struct NVisionShader
{
    float4 GetColor(float2 uv)
    {

        float4 SceneTexture = SceneTextureLookup(uv, 14, false);
        SceneTexture.a = 1.f;
        return SceneTexture;
    }

    float GetBrightness(float3 color)
    {
        return color.x  + color.g  + color.b;
    }

    float3 VisionNumber(float strength, float2 uv, float time, float movementSpeed)
    {
        float offsetValue = sin(time * movementSpeed) * strength;
        float4 originalColor = GetColor(uv);
        int numSamples = 3;

        float2 offset1 = float2(-offsetValue, -offsetValue); // First offset

        float4 offsetResult = originalColor;
        offsetResult += GetColor(clamp((uv+offset1)/1.03, float2(0.f, 0.f), float2(1.f, 1.f)));
        
        return offsetResult*0.5;
    }
};

NVisionShader shader;
float2 uv = GetDefaultSceneTextureUV(Parameters, 14);
float4 color = float4(shader.VisionNumber(Strength, uv, Time, MovementSpeed), 1.f);
return color;