// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGWallHologram.h"
#include "Buildables/FGBuildableWall.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGWallHologram::AFGWallHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGWallHologram::BeginPlay(){ }
bool AFGWallHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
AActor* AFGWallHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGWallHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
bool AFGWallHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGWallHologram::GetRotationStep() const{ return int32(); }
