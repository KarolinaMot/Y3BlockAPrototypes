struct DistortionShader
{

    float3 GetColor(float2 uv)
    {

        float4 SceneTexture = SceneTextureLookup(uv, 14, false);

        return SceneTexture.rgb;
    }
    float3 Distortion(float2 uv, float perlinNoise, float strengthMultiplicator)
    {    
        // Create a distortion offset from noise
        float2 distortion = float2(perlinNoise, perlinNoise) * 0.05 * strengthMultiplicator;
        
        // Apply the distortion to the UV coordinates
        float2 distortedUV = clamp(uv + distortion, float2(0.f, 0.f), float2(1.f, 1.f));
        
        // Sample the texture using the distorted UVs
        float3 color = GetColor(distortedUV);
        
        return color;
    }
};

DistortionShader shader;
float2 uv = GetDefaultSceneTextureUV(Parameters, 14);
float3 result = shader.Distortion(uv, PerlinNoise, StrengthMultiplicator);
return float4(result, 1.f);

