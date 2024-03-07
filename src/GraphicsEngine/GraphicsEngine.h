#pragma once
#include "pch.h"
#include "Math/Mat4.h"
#include "Math/Vec2.h"
#include "GraphicsEngine/Mesh.h"
#include "GraphicsEngine/GraphicsDevice.h"

class GraphicsEngine
{
public:
	static constexpr UINT FRAME_COUNT = 2;
	void OnInitialize();
	void OnUpdate(float aDeltaSeconds, float aTimeSeconds, const Mat4& aToViewMatrix, const Mat4& aToProjectionMatrix);
	void OnDestroy();
private:
	GraphicsDevice myGraphicsDevice;
	Buffer myInstanceConstantBuffer;
	Buffer myPassConstantBuffer;
	Mesh myMesh;
};