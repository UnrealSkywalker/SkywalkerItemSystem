// Fill out your copyright notice in the Description page of Project Settings.

#include "GroundItem/SkywalkerGroundItem.h"

// Sets default values
ASkywalkerGroundItem::ASkywalkerGroundItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASkywalkerGroundItem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASkywalkerGroundItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
