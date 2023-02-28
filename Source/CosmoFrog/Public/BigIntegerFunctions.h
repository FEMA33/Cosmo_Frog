// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BigIntegerFunctions.generated.h"

/**
 * 
 */
UCLASS()
class COSMOFROG_API UBigIntegerFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "BigInteger")
		static int64 BigIntPower(int64 num, int64 deg);

		UFUNCTION(BlueprintCallable, Category = "BigInteger")
		static FString BigIntToString(int64 num);

		UFUNCTION(BlueprintCallable, Category = "BigInteger")
		static int64 FloatToBigInt(float num);
};
