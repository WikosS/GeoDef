// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLib.h"

FHitResult UMyLib::RaycastFromCamera(const APlayerController* PlayerController, float MaxDistance)
{
    FHitResult HitResult;

    if (!PlayerController)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player controller is null."));
        return HitResult;
    }

    FVector CameraLocation;
    FRotator CameraRotation;
    PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    FVector EndLocation = CameraLocation + CameraRotation.Vector() * MaxDistance;
    FCollisionQueryParams TraceParams(FName(TEXT("Raycast")), true, PlayerController->GetPawn());

    bool bHit = PlayerController->GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, EndLocation, ECC_Visibility, TraceParams);

    if (bHit)
    {
        // Hit something
        return HitResult;
    }
    else
    {
        // Didn't hit anything
        return FHitResult();
    }
}