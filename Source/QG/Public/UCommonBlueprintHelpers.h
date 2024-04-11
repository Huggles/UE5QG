// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UCommonBlueprintHelpers.generated.h"

/**
 * 
 */
UCLASS()
class QG_API UCommonBlueprintHelpers : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Class Utilities")
	static UClass* GetObjectParentClass(UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "Class Utilities")
	static UClass* GetParentClass(UClass* ChildClass);
	UFUNCTION(BlueprintCallable, Category = "Class Utilities")
	static TArray<UClass*> GetParentClasses(UClass* ChildClass);

	UFUNCTION(BlueprintCallable, Category = "Editor Utilities")
	static bool IsWithEditor();

	
};	