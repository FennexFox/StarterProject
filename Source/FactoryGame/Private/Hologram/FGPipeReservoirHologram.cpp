// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipeReservoirHologram.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGPipeReservoirHologram::AFGPipeReservoirHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGPipeReservoirHologram::BeginPlay(){ }
bool AFGPipeReservoirHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPipeReservoirHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
int32 AFGPipeReservoirHologram::GetRotationStep() const{ return int32(); }
