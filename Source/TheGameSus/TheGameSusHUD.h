// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TheGameSusHUD.generated.h"

UCLASS()
class ATheGameSusHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATheGameSusHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

