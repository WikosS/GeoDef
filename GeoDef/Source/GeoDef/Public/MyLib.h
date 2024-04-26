// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

/**
 * 
 */
UCLASS()
class GEODEF_API UMyLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Survivor Gameplay")
	static FHitResult RaycastFromCamera(const APlayerController* PlayerController, float MaxDistance);
};
