// Fill out your copyright notice in the Description page of Project Settings.

#include "HeightMapReader.h"


// Sets default values
AHeightMapReader::AHeightMapReader()
{

}

void AHeightMapReader::ReadPixels() {
	//borrowed from RenderTarget::ReadPixels()
	FTextureRenderTarget2DResource* RenderResource = (FTextureRenderTarget2DResource*)RenderTarget->Resource;

	// Read the render target surface data back.	
	struct FReadSurfaceContext
	{
		FRenderTarget* SrcRenderTarget;
		TArray<FColor>* OutData;
		FIntRect Rect;
		FReadSurfaceDataFlags Flags;
	};

	ColorBuffer.Reset();
	FReadSurfaceContext ReadSurfaceContext =
	{
		RenderResource,
		&ColorBuffer,
		FIntRect(0, 0, RenderResource->GetSizeXY().X, RenderResource->GetSizeXY().Y),
		FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX)
	};

	ENQUEUE_UNIQUE_RENDER_COMMAND_ONEPARAMETER(
		ReadSurfaceCommand,
		FReadSurfaceContext, Context, ReadSurfaceContext,
		{
			RHICmdList.ReadSurfaceData(
				Context.SrcRenderTarget->GetRenderTargetTexture(),
				Context.Rect,
				*Context.OutData,
				Context.Flags
			);
		});
}

void AHeightMapReader::UpdateBuffer()
{
	ColorBuffer.Reset();

	if (RenderTarget != NULL)
	{

		FTextureRenderTarget2DResource* textureResource = (FTextureRenderTarget2DResource*)RenderTarget->Resource;
		if (textureResource->ReadPixels(ColorBuffer))
		{

		}
	}
	// to i initiate reading
	//ReadPixels();
	/*ReadPixelFence.BeginFence();
	bReadPixelsStarted = true;*/

		// To check if we are done reading: 
		// I do this in my tick function

}


FColor AHeightMapReader::GetRenderTargetValue(float x, float y)
{
	/*if (bReadPixelsStarted && ReadPixelFence.IsFenceComplete())
	{*/
		float size = 50000.0;

		if (RenderTarget == NULL || ColorBuffer.Num() == 0)
			return FColor(0);

		float width = RenderTarget->GetSurfaceWidth();
		float height = RenderTarget->GetSurfaceHeight();

		//Conver coordinates to texture space
		float normalizedX = (x / size);
		float normalizedY = (y / size);

		int i = (int)(normalizedX * width);
		int j = (int)(normalizedY * height);

		if (i < 0) i = 0;
		if (i >= width) i = width - 1;
		if (j < 0) j = 0;
		if (j >= height) j = height - 1;

		int index = i + j * width;
		if (index < 0) index = 0;
		if (index >= ColorBuffer.Num()) index = ColorBuffer.Num();

		return ColorBuffer[index];
	//}
	//return FColor(255);
}