// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "Item/SkywalkerItem.h"

#include "SkywalkerItemSubsystem.generated.h"

/**
 *
 */
UCLASS()
class SKYWALKERITEMSYSTEM_API USkywalkerItemSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/**
	 * 创建道具
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Item")
	USkywalkerItem *CreateItem(TSubclassOf<USkywalkerItem> ItemClass, FName ConfigID, int32 Count);
};
