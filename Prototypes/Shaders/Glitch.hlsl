struct GlitchShader
{
    float rand(float2 co)
    {
        return frac(sin(dot(co.xy, float2(12.9898, 78.233))) * 43758.5453);
    }

    float3 GetColor(float2 uv)
    {

        float4 SceneTexture = SceneTextureLookup(uv, 14, false);

        return SceneTexture.rgb;
    }

    float sineWithGaps(float x, float frequency, float gapTime)
    {
        // Standard sine wave
        float sineValue = sin(x * frequency);
        
        // Use modulus to create gaps (flatten the sine value to 0 in certain intervals)
        if (fmod(x, gapTime) < gapTime * 0.5)
        {
            return sineValue; // Keep the sine wave
        }
        else
        {
            return 0.0; // Create the gap by returning 0
        }
    }

    float3 GlitchEffect( float shakePower, float shakeRate, float shakeSpeed, float shakeBlockSize, float shakeColorRate, float2 uv,  float deltaTime, float time,  float2 resolution, float glitchRate, float glitchGapTime)
    {
        float enable_shift = float(
            rand( trunc( deltaTime * shakeSpeed ) )
        <	shakeRate
        );

        float2 fixed_uv = uv;
        fixed_uv.x += (
            rand(
                ( trunc( uv.y * shakeBlockSize ) / shakeBlockSize )
            +	deltaTime
            ) - 0.5
        ) * shakePower * enable_shift;

        // Calculate a random horizontal glitch effect based on the Y position and time
        float glitchLine = rand(float2(uv.y * resolution.y, deltaTime)) * 2.0;

        // Condition to apply the glitch only on certain lines
        if (glitchLine > 1.5)
        {
            // Apply horizontal distortion to the UV coordinates
            fixed_uv.x += sin(deltaTime * 10.0 + fixed_uv.y * 50.0) * 0.1 * glitchLine;
        }

        float3 pixel_color = GetColor(fixed_uv);
        pixel_color.r = lerp(
            pixel_color.r
        ,	GetColor(fixed_uv + float2( shakeColorRate, 0.0 )).r
        ,	enable_shift
        );
        pixel_color.b = lerp(
            pixel_color.b
        ,	GetColor( fixed_uv + float2( -shakeColorRate, 0.0 )).b
        ,	enable_shift
        );

        float glitchValue = sineWithGaps(time, glitchRate, glitchGapTime);
        if(glitchValue > 0 )
        return pixel_color;
        else
        return  GetColor(uv);
    }
};

GlitchShader shader;
float2 uv = GetDefaultSceneTextureUV(Parameters, 14);
float4 color = float4(shader.GlitchEffect(ShakePower, ShakeRate, ShakeSpeed, ShakeBlockSize, ShakeColorRate, uv, DeltaTime, Time, Resolution, GlitchRate, GlitchGapTime), 1.f);
return color;
