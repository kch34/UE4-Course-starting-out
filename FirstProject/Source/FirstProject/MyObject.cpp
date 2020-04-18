// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject()
{
	myfloat = 0;
}

void UMyObject::myfunction()
{
	UE_LOG(LogTemp,Warning, TEXT("This is our warning text!"));
}