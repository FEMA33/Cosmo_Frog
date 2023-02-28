// Fill out your copyright notice in the Description page of Project Settings.


#include "Test1.h"

FString UTest1::HelloWorld(int a, int b)
{
	int foo = a + b;

	return (FString::Printf(TEXT("HelloWorld: Our value is %d + %d = %d"), a, b, foo)); 
}
