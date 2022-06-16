// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuncToBluePrint.generated.h"

UCLASS()
class CPPPRACTICE_API AFuncToBluePrint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFuncToBluePrint();

	bool bPressedKey; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 함수를 블루 프린트에서 사용하기
	UFUNCTION(BlueprintCallable, Category="Move")
		void InputSpaceKey(bool pressed);

	UFUNCTION(BlueprintCallable, Category="Move")
		void MoveUp(float DeltaTime);
};
