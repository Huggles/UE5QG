// Fill out your copyright notice in the Description page of Project Settings.


#include "UCommonBlueprintHelpers.h"

UClass* UCommonBlueprintHelpers::GetObjectParentClass(UObject* Object)
{
    return Object->GetClass()->GetSuperClass();
}

UClass* UCommonBlueprintHelpers::GetParentClass(UClass* ChildClass)
{
    return ChildClass->GetSuperClass();
}

TArray<UClass*> UCommonBlueprintHelpers::GetParentClasses(UClass* ChildClass)
{
    TArray<UClass*> response = TArray<UClass*>{};
    response.Add(ChildClass);
    UClass* SuperClass = ChildClass->GetSuperClass();
    if (SuperClass != NULL) {
        response.Append(GetParentClasses(SuperClass));
    }
    return response;
}

bool UCommonBlueprintHelpers::IsWithEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}
