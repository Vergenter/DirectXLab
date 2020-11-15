#pragma once
#include <pch.h>
namespace CustomViews {
	DirectX::XMMATRIX GetView(const DirectX::XMVECTORF32 eye, const DirectX::XMVECTORF32 at, const DirectX::XMVECTORF32 up) {
		return DirectX::XMMatrixTranspose(DirectX::XMMatrixLookAtRH(eye, at, up));
	}
	const auto Views = std::array<DirectX::XMMATRIX, 3>{
		GetView({ 0.0f, 0.7f, 1.5f, 0.0f }, { 0.0f, -0.1f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }),
		GetView({ 0.0f, 0.7f, 3.0f, 0.0f }, { 0.0f, -0.1f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }),
		GetView({ 0.0f, 3.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f, 0.0f }, { 1.0f, 0.0f, 0.0f, 0.0f }),
	};

}