// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <optional>
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DevToolGameplayStatics.generated.h"

/**
 * 
 */
UCLASS()
class DEVTOOLKIT_API UDevToolGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure,Category="UDevToolGameplayStatics|Editor")
	static bool IsEditor();
	
	static bool IsLittleEndian();
	
	UFUNCTION(BlueprintCallable,Category=" UDevToolGameplayStatics|Serial")
	static int32 BytesToIntegerInRange(const TArray<uint8>& Bytes, int32 BeginIndex, int32 EndIndex,bool isDataBigEndian );

	UFUNCTION(BlueprintPure,Category=" UDevToolGameplayStatics|Serial")
	static int32 BytesToIntegerInRangePure(const TArray<uint8>& Bytes, int32 BeginIndex, int32 EndIndex,bool isDataBigEndian );

	UFUNCTION(BlueprintPure,Category=" UDevToolGameplayStatics|Serial")
	static float BytesToFloatInRangePure(const TArray<uint8>& Bytes, int32 BeginIndex, int32 EndIndex, bool isDataBigEndian);

	UFUNCTION(BlueprintCallable,Category=" UDevToolGameplayStatics")
	static void  GetClosestPointsBetweenTwoComponents(UPrimitiveComponent* Comp1, UPrimitiveComponent* Comp2,FVector &PA,FVector&PB);

	UFUNCTION(BlueprintCallable,Category=" UDevToolGameplayStatics")
	static float GetGameDuration(UWorld*World);
	

};
