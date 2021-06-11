// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GamejamProjectHUD.generated.h"

UCLASS()
class AGamejamProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGamejamProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

