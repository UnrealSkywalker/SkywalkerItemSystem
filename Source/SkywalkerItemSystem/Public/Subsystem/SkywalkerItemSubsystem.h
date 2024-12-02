// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "Item/SkywalkerItem.h"
#include "GroundItem/SkywalkerGroundItem.h"

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
	 * @param ItemClass 道具类
	 * @param ConfigID 配置ID
	 * @param Count 数量
	 * @return 道具 USkywalkerItem
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Item")
	USkywalkerItem *CreateItem(TSubclassOf<USkywalkerItem> ItemClass, FName ConfigID, int32 Count);

	/**
	 * 创建地面道具
	 * @param GroundItemClass 地面道具类
	 * @param Transform 位置
	 * @param ConfigID 配置ID
	 * @param Count 数量
	 * @return 地面道具 ASkywalkerGroundItem
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|GroundItem")
	ASkywalkerGroundItem *CreateGroundItem(TSubclassOf<ASkywalkerGroundItem> GroundItemClass, const FTransform &Transform, FName ConfigID, int32 Count);
};
