// Fill out your copyright notice in the Description page of Project Settings.


#include "FuncToBluePrint.h"

// Sets default values
AFuncToBluePrint::AFuncToBluePrint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFuncToBluePrint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFuncToBluePrint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFuncToBluePrint::InputSpaceKey(bool pressed)
{
	bPressedKey = pressed;
}

void AFuncToBluePrint::MoveUp(float DeltaTime)
{
	if(bPressedKey)
	{
		FVector Location = GetActorLocation();
		Location += FVector::UpVector * 980.0f * DeltaTime;
		SetActorLocation(Location);
	}
}

