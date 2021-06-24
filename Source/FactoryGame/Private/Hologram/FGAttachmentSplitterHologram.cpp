// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGAttachmentSplitterHologram.h"
#include "Buildables/FGBuildableAttachmentSplitter.h"
#include "Buildables/FGBuildableConveyorAttachment.h"
#include "Buildables/FGBuildableConveyorBelt.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGAttachmentSplitterHologram::AFGAttachmentSplitterHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableConveyorBelt::StaticClass()); this->mValidHitClasses.Add(AFGBuildableConveyorAttachment::StaticClass()); this->mValidHitClasses.Add(AFGBuildableAttachmentSplitter::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
}
bool AFGAttachmentSplitterHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
bool AFGAttachmentSplitterHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
AActor* AFGAttachmentSplitterHologram::GetUpgradedActor() const{ return nullptr; }
void AFGAttachmentSplitterHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
