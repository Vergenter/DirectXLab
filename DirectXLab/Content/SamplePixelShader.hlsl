Texture2D simpleTexture : register(t0);
SamplerState simpleSampler : register(s0);
// Per-pixel color data passed through the pixel shader.
struct PixelShaderInput
{
	float4 pos : SV_POSITION;
	float3 norm : NORMAL;
	float2 tex : TEXCOORD0;
};

// A pass-through function for the (interpolated) color data.
float4 main(PixelShaderInput input) : SV_TARGET
{
	float4 texelColor = simpleTexture.Sample(simpleSampler, input.tex);
	return texelColor;
}
