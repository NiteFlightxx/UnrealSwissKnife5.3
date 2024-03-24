// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniMapSubsystem.h"
#include "MiniMapItemIcon.h"

const TArray<AMiniMapBase*>& UMiniMapSubsystem::GetMiniMapBaseArr() const
{
	return MiniMapBaseArr;
}

const TArray<UMiniMapItemIcon*>& UMiniMapSubsystem::GetMiniMapItemIconArr() const
{
	return MiniMapItemIconArr;
}

void UMiniMapSubsystem::RegisterMiniMapItem(UMiniMapItemIcon* MiniMapItem)
{
	MiniMapItemIconArr.Add(MiniMapItem);
	OnMiniMapItemRegisteredSignature.Broadcast(MiniMapItem);
}

void UMiniMapSubsystem::UnregisterMapIcon(UMiniMapItemIcon* MiniMapItem)
{
	MiniMapItemIconArr.RemoveSingle(MiniMapItem);
	OnMiniMapItemUnregisteredSignature.Broadcast(MiniMapItem);
}
