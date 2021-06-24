// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipelineJunctionHologram.h"
#include "Buildables/FGBuildableWall.h"
#include "Buildables/FGBuildablePipelineAttachment.h"
#include "Buildables/FGBuildablePipeline.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGPipelineJunctionHologram::AFGPipelineJunctionHologram() : Super() {
	this->mMaxValidTurnOffset = 140;
	this->mMaxValidTurnAngle = 3;
	this->mRotationAxis = EAxis::Y;
	this->mUseProducerDirectionalArrow = true;
	this->mProducerArrowRelativeLocation.X = 0; this->mProducerArrowRelativeLocation.Y = 0; this->mProducerArrowRelativeLocation.Z = 200;
	this->mWallSnapOffset.X = 0; this->mWallSnapOffset.Y = 75;
	this->mIncludeBuildGuideTraceChannel = true;
	this->mMaxPlacementFloorAngle = 35;
	this->mUseGradualFoundationRotations = true;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildablePipeline::StaticClass()); this->mValidHitClasses.Add(AFGBuildablePipelineAttachment::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
int32 AFGPipelineJunctionHologram::GetRotationStep() const{ return int32(); }
