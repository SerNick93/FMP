// Fill out your copyright notice in the Description page of Project Settings.


#include "GamepadConnected.h"
#include "SlateBasics.h"

bool UGamepadConnected::IsGamePadConnected()
{
    auto genericApplication = FSlateApplication::Get().GetPlatformApplication();

    if (genericApplication.Get() != nullptr && genericApplication->IsGamepadAttached())
    {
        return true;
    }
    return false;
}