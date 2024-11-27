// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/SkywalkerItem.h"

bool USkywalkerItem::OnCreate(FName InItemConfigID, int32 InCount)
{
    ConfigID = InItemConfigID;
    Count = InCount;

    // 初始化属性
    for (int32 i = 0; i < PropertyCount; ++i)
    {
        Properties.Add(0);
    }

    Create();

    return true;
}

void USkywalkerItem::Create_Implementation()
{
}

const FName &USkywalkerItem::GetConfigID() const
{
    return ConfigID;
}

int32 USkywalkerItem::GetCount() const
{
    return Count;
}

void USkywalkerItem::SetCount(int32 InCount)
{
    Count = InCount;
}

int32 USkywalkerItem::GetProperty(int32 Index) const
{
    if (Index < 0 || Index >= PropertyCount)
    {
        return 0;
    }

    return Properties[Index];
}

void USkywalkerItem::SetProperty(int32 Index, int32 Value)
{
    if (Index < 0 || Index >= PropertyCount)
    {
        return;
    }

    Properties[Index] = Value;
}
