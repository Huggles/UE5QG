// Fill out your copyright notice in the Description page of Project Settings.


#include "QGGameUserSettings.h"

UQGGameUserSettings::UQGGameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	ActionDelay = 1;
}

UQGGameUserSettings* UQGGameUserSettings::GetQGGameUserSettings()
{
	return Cast<UQGGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void UQGGameUserSettings::SetActionDelay(int32 newValue)
{
	ActionDelay = newValue;
}

int32 UQGGameUserSettings::GetActionDelay() const
{
	return ActionDelay;
}
