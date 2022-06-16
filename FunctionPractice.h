// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FunctionPractice.generated.h"

UCLASS()
class CPPPRACTICE_API AFunctionPractice : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFunctionPractice();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    virtual void PostInitProperties() override; // 변수가 초기화될 때 호출
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override; // 변수가 수정될 때 호출
    
    void CalculateDPS();
    
    UPROPERTY(EditAnywhere, BluePrintReadWrite, Category="Damage")
    int32 TotalDamage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Damage")
	float DamageTimeInSeconds;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category="Damage")
	float DamagePerSecond;


};
