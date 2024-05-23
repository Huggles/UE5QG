// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "QGGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class QG_API UQGGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UQGGameUserSettings* GetQGGameUserSettings();

	UFUNCTION(BlueprintCallable)
	void SetActionDelay(int32 newValue);
	
	UFUNCTION(BlueprintPure)
	int32 GetActionDelay() const;

protected:
	UPROPERTY(Config)
	int32 ActionDelay;

	
};
