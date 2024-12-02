// Fill out your copyright notice in the Description page of Project Settings.

#include "GroundItem/SkywalkerGroundItem.h"

// Sets default values
ASkywalkerGroundItem::ASkywalkerGroundItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

bool ASkywalkerGroundItem::OnCreate(FName InItemConfigID, int32 InCount)
{
	ConfigID = InItemConfigID;
	Count = InCount;

	Create();

	return true;
}

void ASkywalkerGroundItem::Create_Implementation()
{
}

const FName &ASkywalkerGroundItem::GetConfigID() const
{
	return ConfigID;
}
