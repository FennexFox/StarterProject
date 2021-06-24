// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGFloodlightHologram.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGFloodlightHologram::AFGFloodlightHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mUseGradualFoundationRotations = true;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGFloodlightHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGFloodlightHologram::BeginPlay(){ }
bool AFGFloodlightHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGFloodlightHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGFloodlightHologram::ScrollRotate(int32 delta, int32 step){ }
bool AFGFloodlightHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGFloodlightHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGFloodlightHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
int32 AFGFloodlightHologram::GetRotationStep() const{ return int32(); }
void AFGFloodlightHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGFloodlightHologram::OnRep_FixtureAngle(){ }