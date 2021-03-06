// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor() : TotalDamage(10), DamageTimeInSeconds(1.2f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    UE_LOG(LogTemp, Log, TEXT("Constructor [my log]"));
    
    DamagePerSecond = TotalDamage / DamageTimeInSeconds;
    CharacterName = TEXT("Nickname");
    bAttackable = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
    
    UE_LOG(LogTemp, Log, TEXT("BeginPlay [my log]"));
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    UE_LOG(LogTemp, Log, TEXT("Tick [my log]"));

}

