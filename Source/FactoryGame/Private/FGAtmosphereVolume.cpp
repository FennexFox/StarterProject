// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAtmosphereVolume.h"

FExponentialFogSettings::FExponentialFogSettings(){ }
#if WITH_EDITOR
void AFGAtmosphereVolume::PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
#endif 
#if WITH_EDITOR
float AFGAtmosphereVolume::GetViewMinInput() const{ return float(); }
float AFGAtmosphereVolume::GetViewMaxInput() const{ return float(); }
void AFGAtmosphereVolume::SetViewRange(float min, float max){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGAtmosphereVolume::AFGAtmosphereVolume() : Super() {
	this->mPriority = 1;
	this->mBlendDistance = 100;
	this->mFogHeight.EditorCurveData.DefaultValue = 5000; this->mFogHeight.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mFogHeight.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mFogHeight.ExternalCurve = 0;
	this->mFogDensity.EditorCurveData.DefaultValue = 0.0199999995529652; this->mFogDensity.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mFogDensity.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mFogDensity.ExternalCurve = 0;
	this->mFullyDirectionalInscatteringColorDistance.EditorCurveData.DefaultValue = 100000; this->mFullyDirectionalInscatteringColorDistance.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mFullyDirectionalInscatteringColorDistance.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mFullyDirectionalInscatteringColorDistance.ExternalCurve = 0;
	this->mNonDirectionalInscatteringColorDistance.EditorCurveData.DefaultValue = 1000; this->mNonDirectionalInscatteringColorDistance.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mNonDirectionalInscatteringColorDistance.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mNonDirectionalInscatteringColorDistance.ExternalCurve = 0;
	this->mDirectionalInscatteringExponent.EditorCurveData.DefaultValue = 4; this->mDirectionalInscatteringExponent.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mDirectionalInscatteringExponent.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mDirectionalInscatteringExponent.ExternalCurve = 0;
	this->mDirectionalInscatteringStartDistance.EditorCurveData.DefaultValue = 10000; this->mDirectionalInscatteringStartDistance.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mDirectionalInscatteringStartDistance.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mDirectionalInscatteringStartDistance.ExternalCurve = 0;
	this->mFogHeightFalloff.EditorCurveData.DefaultValue = 0.200000002980232; this->mFogHeightFalloff.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mFogHeightFalloff.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mFogHeightFalloff.ExternalCurve = 0;
	this->mFogMaxOpacity.EditorCurveData.DefaultValue = 1; this->mFogMaxOpacity.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mFogMaxOpacity.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mFogMaxOpacity.ExternalCurve = 0;
	this->mStartDistance.EditorCurveData.DefaultValue = 0; this->mStartDistance.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mStartDistance.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mStartDistance.ExternalCurve = 0;
	this->mFogCutoffDistance.EditorCurveData.DefaultValue = 0; this->mFogCutoffDistance.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mFogCutoffDistance.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mFogCutoffDistance.ExternalCurve = 0;
	this->mBlendWeight = 1;
}
void AFGAtmosphereVolume::PostLoad(){ Super::PostLoad(); }
void AFGAtmosphereVolume::PostRegisterAllComponents(){ }
void AFGAtmosphereVolume::PostUnregisterAllComponents(void){ }
bool AFGAtmosphereVolume::EncompassesPoint(FVector point, float sphereRadius , float* out_distanceToPoint){ return bool(); }
FPostProcessVolumeProperties AFGAtmosphereVolume::GetProperties() const{ return FPostProcessVolumeProperties(); }
void AFGAtmosphereVolume::GetSettings(FExponentialFogSettings& out_settings) const{ }
void AFGAtmosphereVolume::GetSettings(float atTime, FExponentialFogSettings& out_settings) const{ }
void AFGAtmosphereVolume::GetSkySphereSettings(float atTime, FSkySphereSettings& out_settings) const{ }
void AFGAtmosphereVolume::AddVolume(){ }
void AFGAtmosphereVolume::RemoveVolume(){ }
