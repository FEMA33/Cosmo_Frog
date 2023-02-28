// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Test1.generated.h"

/**
 * 
 */
UCLASS()
class COSMOFROG_API UTest1 : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyCategory")
		static FString HelloWorld(int a, int b);

};
