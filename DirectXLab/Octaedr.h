#pragma once
#include "Content/ShaderStructures.h"
namespace DirectXLab {
	const VertexForTexture octaedrVertices[] =
	{
		{DirectX::XMFLOAT3( 0.0f, 0.0f,-0.5f), DirectX::XMFLOAT3( 1.0f, 1.0f,-1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3( 0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3( 1.0f, 1.0f,-1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3( 0.0f, 0.5f, 0.0f), DirectX::XMFLOAT3( 1.0f, 1.0f,-1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3( 0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3( 1.0f, 1.0f, 1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3( 0.0f, 0.0f, 0.5f), DirectX::XMFLOAT3( 1.0f, 1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3( 0.0f, 0.5f, 0.0f), DirectX::XMFLOAT3( 1.0f, 1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3(0.0f, 0.0f, 0.5f), DirectX::XMFLOAT3(-1.0f, 1.0f, 1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3(-0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3(-1.0f, 1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, -0.5f, 0.0f), DirectX::XMFLOAT3(-1.0f, 1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3(-0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3(-1.0f, 1.0f, -1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, 0.0f, -0.5f), DirectX::XMFLOAT3(-1.0f, 1.0f, -1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, -0.5f, 0.0f), DirectX::XMFLOAT3(-1.0f, 1.0f, -1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3(0.0f, 0.0f,-0.5f), DirectX::XMFLOAT3(1.0f, -1.0f,-1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3(1.0f, -1.0f,-1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, -0.5f, 0.0f), DirectX::XMFLOAT3(1.0f, -1.0f,-1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3(0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3(1.0f, -1.0f, 1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, 0.0f, 0.5f), DirectX::XMFLOAT3(1.0f, -1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, -0.5f, 0.0f), DirectX::XMFLOAT3(1.0f, -1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3(0.0f, 0.0f, 0.5f), DirectX::XMFLOAT3(-1.0f, -1.0f, 1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3(-0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3(-1.0f, -1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, 0.5f, 0.0f), DirectX::XMFLOAT3(-1.0f, -1.0f, 1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},

		{DirectX::XMFLOAT3(-0.5f, 0.0f, 0.0f), DirectX::XMFLOAT3(-1.0f, -1.0f, -1.0f),DirectX::XMFLOAT2(0.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, 0.0f, -0.5f), DirectX::XMFLOAT3(-1.0f, -1.0f, -1.0f),DirectX::XMFLOAT2(1.0f, 0.0f)},
		{DirectX::XMFLOAT3(0.0f, 0.5f, 0.0f), DirectX::XMFLOAT3(-1.0f, -1.0f, -1.0f),DirectX::XMFLOAT2(1.0f, 1.0f)},
	};
}