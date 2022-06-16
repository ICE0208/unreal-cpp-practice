// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionPractice.h"

// Sets default values
AFunctionPractice::AFunctionPractice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 400;
	DamageTimeInSeconds = 2.5f;

}

// Called when the game starts or when spawned
void AFunctionPractice::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFunctionPractice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFunctionPractice::CalculateDPS()
{
    DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

void AFunctionPractice::PostInitProperties()
{
    Super::PostInitProperties(); // 부모 클래스 생성자 호출
    
    CalculateDPS();
}

void AFunctionPractice::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    CalculateDPS();
    
    Super::PostEditChangeProperty(PropertyChangedEvent);
}

