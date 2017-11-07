// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RHICommandList.h"
#include "Engine/TextureRenderTarget2D.h"
#include "HeightMapReader.generated.h"


UCLASS()
class AHeightMapReader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeightMapReader();
	UPROPERTY(Category = HeightMap, EditAnywhere)
		UTextureRenderTarget2D* RenderTarget;

	UFUNCTION(BlueprintCallable, Category = "HeightMap|Update")
		void UpdateBuffer();

	UFUNCTION(BlueprintCallable, Category = "HeightMap|Texture Helper")
		FColor GetRenderTargetValue(float x, float y);

private:

	void ReadPixels();

	bool bReadPixelsStarted = false;
	FRenderCommandFence ReadPixelFence;
	TArray<FColor> ColorBuffer;
	
	
};
