// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGEquipmentBoomBox.h"

AFGEquipmentBoomBox::AFGEquipmentBoomBox() : Super() {
	this->mCurrentTapeIndex = -1;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGEquipmentBoomBox::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGEquipmentBoomBox::UpdateTapeIndex(int32 indexToAdd){ }
