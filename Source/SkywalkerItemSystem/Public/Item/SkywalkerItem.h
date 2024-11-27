// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkywalkerItem.generated.h"

/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class SKYWALKERITEMSYSTEM_API USkywalkerItem : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * 创建道具
	 */
	bool OnCreate(FName InItemConfigID, int32 InCount);

	/**
	 * 创建
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Skywalker|Item")
	void Create();

	/**
	 * 获取道具配置ID
	 * @return 道具配置ID
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Item")
	const FName &GetConfigID() const;

	/**
	 * 获取道具数量
	 * @return 道具数量
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Item")
	int32 GetCount() const;

	/**
	 * 设置道具数量
	 */
	void SetCount(int32 InCount);

	/**
	 * 获取道具属性
	 * @param Index 属性索引，从0开始
	 * @return 属性值
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Item")
	int32 GetProperty(int32 Index) const;

	/**
	 * 设置道具属性
	 * @param Index 属性索引，从0开始
	 * @param Value 属性值
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Item")
	void SetProperty(int32 Index, int32 Value);

public:
	/**
	 * 属性数量
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skywalker|Item")
	int32 PropertyCount = 0;

private:
	/**
	 * 道具配置ID
	 */
	FName ConfigID;

	/**
	 * 道具数量
	 */
	int32 Count;

	/**
	 * 道具属性
	 */
	TArray<int32> Properties;
};
