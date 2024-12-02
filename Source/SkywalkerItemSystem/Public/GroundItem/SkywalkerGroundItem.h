// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkywalkerGroundItem.generated.h"

UCLASS()
class SKYWALKERITEMSYSTEM_API ASkywalkerGroundItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASkywalkerGroundItem();

	bool OnCreate(FName InItemConfigID, int32 InCount);

	/**
	 * 创建
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Skywalker|GroundItem")
	void Create();

	/**
	 * 获取道具配置ID
	 * @return 道具配置ID
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|GroundItem")
	const FName &GetConfigID() const;

private:
	/**
	 * 道具配置ID
	 */
	FName ConfigID;

	/**
	 * 道具数量
	 */
	int32 Count;
};
