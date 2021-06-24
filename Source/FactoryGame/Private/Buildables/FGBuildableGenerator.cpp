// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableGenerator.h"
#include "Hologram/FGFactoryHologram.h"
#include "FGPowerInfoComponent.h"

void AFGBuildableGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableGenerator::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildableGenerator::AFGBuildableGenerator() : Super() {
	this->mPowerProductionExponent = 1.29999995231628;
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableGenerator::BeginPlay(){ }
bool AFGBuildableGenerator::CanProduce_Implementation() const{ return bool(); }
bool AFGBuildableGenerator::Factory_HasPower() const{ return bool(); }
EProductionStatus AFGBuildableGenerator::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
float AFGBuildableGenerator::GetPowerProductionCapacity() const{ return float(); }
float AFGBuildableGenerator::GetDefaultPowerProductionCapacity() const{ return float(); }
float AFGBuildableGenerator::CalcPowerProductionCapacityForPotential(float potential) const{ return float(); }
void AFGBuildableGenerator::SetActorHiddenInGame(bool bNewHidden){ }
bool AFGBuildableGenerator::CanStartPowerProduction_Implementation() const{ return bool(); }
void AFGBuildableGenerator::Factory_TickProducing(float dt){ }
void AFGBuildableGenerator::Factory_StartProducing(){ }
void AFGBuildableGenerator::Factory_StopProducing(){ }
void AFGBuildableGenerator::Factory_StartPowerProduction_Implementation(){ }
void AFGBuildableGenerator::Factory_StopPowerProduction_Implementation(){ }
void AFGBuildableGenerator::Factory_TickPowerProduction_Implementation(float dt){ }
