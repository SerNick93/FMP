// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GamepadConnected.generated.h"

/**
 *
 */
UCLASS()
class PROJECTCELT_API UGamepadConnected : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "GamepadConnected"), Category = "System Information")

        static bool IsGamePadConnected();

};