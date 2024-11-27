// Fill out your copyright notice in the Description page of Project Settings.

#include "Subsystem/SkywalkerItemSubsystem.h"

USkywalkerItem *USkywalkerItemSubsystem::CreateItem(TSubclassOf<USkywalkerItem> ItemClass, FName ConfigID, int32 Count)
{
    USkywalkerItem *Item = NewObject<USkywalkerItem>(GetGameInstance(), ItemClass);
    if (Item == nullptr)
    {
        return nullptr;
    }

    Item->OnCreate(ConfigID, Count);

    return Item;
}
