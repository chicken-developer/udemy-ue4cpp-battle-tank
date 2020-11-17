// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTurret.h"

void UTankTurret::Rotate(float RelativeSpeed) {
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto deltaTime = GetWorld()->DeltaTimeSeconds;
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * deltaTime;
	auto Rotation = GetRelativeRotation().Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));
	UE_LOG(LogTemp, Warning, TEXT("Enter Rotation function"));

}
