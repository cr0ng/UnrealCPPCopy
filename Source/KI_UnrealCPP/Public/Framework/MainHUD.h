// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API AMainHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

protected:

	//MainWidgetClass는 UUserWidget의 파생 클래스만 가능
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> MainWidgetClass = nullptr;


};
