// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameSession.h"

AFGGameSession::AFGGameSession(){ }
void AFGGameSession::UpdateGameSession(){ }
void AFGGameSession::SessionIdUpdated(){ }
void AFGGameSession::Destroyed(){ }
void AFGGameSession::InitOptions(const FString& options){ }
void AFGGameSession::OnStartSessionComplete(FName inSessionName, bool wasSuccessful){ }
void AFGGameSession::OnEndSessionComplete(FName InSessionName, bool bWasSuccessful){ }
void AFGGameSession::PostLogin(APlayerController* newPlayer){ }
void AFGGameSession::NotifyLogout(const APlayerController* PC){ }
void AFGGameSession::HandleMatchHasStarted(){ }
void AFGGameSession::HandleMatchHasEnded(){ }
bool AFGGameSession::KickPlayer(APlayerController* kickedPlayer, const FText& kickReason){ return bool(); }
void AFGGameSession::AddAdmin(APlayerController* AdminPlayer){ }
void AFGGameSession::RemoveAdmin(APlayerController* AdminPlayer){ }
bool AFGGameSession::IsPlayerAdmin(const  APlayerController* player) const{ return bool(); }
void AFGGameSession::AdminLogin( APlayerController* player, const FString& hashedPassword){ }
FFGOnlineSessionSettings AFGGameSession::CreateSessionSettingsForPropagation(UWorld* forWorld, FString saveSessionName){ return FFGOnlineSessionSettings(); }
void AFGGameSession::SetTemporaryCSSSessionID(FString tempID){ }
void AFGGameSession::ClearTemporaryCSSSessionID(){ }
FString AFGGameSession::GetCSSSessionID(UWorld* forWorld, const FString &saveSessionName){ return FString(); }
void AFGGameSession::SetSessionVisibility(ESessionVisibility visibility){ }
int32 AFGGameSession::GetNumPrivateConnections() const{ return int32(); }
int32 AFGGameSession::GetNumPublicConnections() const{ return int32(); }
void AFGGameSession::ListenForIntroSequenceUpdated(){ }
bool AFGGameSession::AllowsLoginAttempts(const  APlayerController* PC) const{ return bool(); }
void AFGGameSession::ClearFailTracking(const  APlayerController* PC){ }
void AFGGameSession::IntroSequenceUpdated(){ }
void AFGGameSession::SetRandomAdminPassword(){ }
void AFGGameSession::OnUpdateSessionComplete(FName sessionName, bool wasSuccessful){ }
