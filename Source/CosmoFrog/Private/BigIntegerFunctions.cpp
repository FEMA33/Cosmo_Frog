// Fill out your copyright notice in the Description page of Project Settings.


#include "BigIntegerFunctions.h"

int64 UBigIntegerFunctions::BigIntPower(int64 num, int64 deg)
{
	int64 result = 1;
	while (deg)
	{
		if (deg % 2 == 0)
		{
			deg /= 2;
			num *= num;
		}
		else
		{
			deg--;
			result *= num;
		}
	}

	return (result);
}

FString UBigIntegerFunctions::BigIntToString(int64 num)
{
	return (FString::Printf(TEXT("%d"),num));
}

int64 UBigIntegerFunctions::FloatToBigInt(float num)
{	
	return int64(static_cast<int64>(num));
}
