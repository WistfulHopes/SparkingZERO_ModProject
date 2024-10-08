#include "SSLevelSequenceUtils.h"

USSLevelSequenceUtils::USSLevelSequenceUtils() {
}

EKoratLevelSequenceValidateResultType USSLevelSequenceUtils::ValidSetMuteControlRigTrack(UMovieSceneSequence* InSequence) {
    return EKoratLevelSequenceValidateResultType::None;
}

bool USSLevelSequenceUtils::ValidSectionOuter(ULevelSequence* InSequence) {
    return false;
}

bool USSLevelSequenceUtils::ValidRebindEvent(ULevelSequence* InSequence) {
    return false;
}

EKoratLevelSequenceValidateResultType USSLevelSequenceUtils::ValidIrregularBingingID(UMovieSceneSequence* InSequence) {
    return EKoratLevelSequenceValidateResultType::None;
}

EKoratLevelSequenceValidateResultType USSLevelSequenceUtils::ValidateSpawnableTrack(UMovieScene* InMovieScene, FString& InResultMessage) {
    return EKoratLevelSequenceValidateResultType::None;
}

bool USSLevelSequenceUtils::ValidateBindingTag(UMovieSceneSequence* InRootSequence) {
    return false;
}

void USSLevelSequenceUtils::SetOverrideTransformOriginActor(ALevelSequenceActor* InLevelSequenceActor, AActor* InActorToOverride, bool bWithEnable) {
}

void USSLevelSequenceUtils::SetOverrideTransformOrigin(ALevelSequenceActor* InLevelSequenceActor, const FTransform& InTransform, bool bWithEnable) {
}

bool USSLevelSequenceUtils::SetBindingActorByName(AActor* InActorToRebind, ALevelSequenceActor* InLevelSequenceActor, const FString& InRegexPattern) {
    return false;
}

bool USSLevelSequenceUtils::SetBindingActorByBindingIDs(AActor* InActorToRebind, ALevelSequenceActor* InLevelSequenceActor, const TArray<FMovieSceneObjectBindingID>& InBindingIDs) {
    return false;
}

bool USSLevelSequenceUtils::SetBindingActorByBindingID(AActor* InActorToRebind, ALevelSequenceActor* InLevelSequenceActor, const FMovieSceneObjectBindingID& InBindingId) {
    return false;
}

void USSLevelSequenceUtils::ResetOverrideTransformOrigin(ALevelSequenceActor* InLevelSequenceActor, bool bReset) {
}

void USSLevelSequenceUtils::ResetBindingActorByName(ALevelSequenceActor* InLevelSequenceActor, const FString& InRegexPattern) {
}

void USSLevelSequenceUtils::ResetBindingActorByBindingIDs(ALevelSequenceActor* InLevelSequenceActor, const TArray<FMovieSceneObjectBindingID>& InBindingIDs) {
}

void USSLevelSequenceUtils::ResetBindingActorByBindingID(ALevelSequenceActor* InLevelSequenceActor, const FMovieSceneObjectBindingID& InBindingId) {
}

bool USSLevelSequenceUtils::ReplaceTemporaryCharacter(ULevelSequence* InLevelSequence, UClass* InNewClass) {
    return false;
}

bool USSLevelSequenceUtils::ReplaceCharacterVisibilityTrack(ULevelSequence* InLevelSequence) {
    return false;
}

bool USSLevelSequenceUtils::RemoveindingTagByName(UMovieSceneSequence* InRootSequence, const FString& InRegexPattern, const FName& InRemoveTagName, const bool InbSameDisplayName) {
    return false;
}

void USSLevelSequenceUtils::ModifyColorOfParticleParameter(ULevelSequence* InLevelSequence, const FLinearColor InColor) {
}

void USSLevelSequenceUtils::MarkModify(ULevelSequence* InSequence) {
}

bool USSLevelSequenceUtils::IsEqualEnum(const UMovieSceneByteTrack* InByteTrack, const UEnum* InEnum) {
    return false;
}

bool USSLevelSequenceUtils::GetOverrideTransform(ALevelSequenceActor* InSequenceActor, FTransform& OutTransform) {
    return false;
}

TArray<UMovieSceneSequence*> USSLevelSequenceUtils::GetAllSequence(UMovieSceneSequence* InRootSequence, const bool InCheckActiveSection) {
    return TArray<UMovieSceneSequence*>();
}

bool USSLevelSequenceUtils::ForceChangeCharacterID(ULevelSequence* InSequence, UClass* InNewClass, const FString& InCharacterId) {
    return false;
}

UEnum* USSLevelSequenceUtils::FindNativeEnum(const FString& InEnumPath) {
    return NULL;
}

TArray<FMovieSceneObjectBindingID> USSLevelSequenceUtils::FindBindingIDsByName(FKoratMovieSceneSequenceGetter InSequenceGetter, const FString& InRegexPattern) {
    return TArray<FMovieSceneObjectBindingID>();
}

bool USSLevelSequenceUtils::DebugDisableASyncEvaluateWhenTimeDilation(UMovieSceneSequence* InMasterSequence, bool InWithConvert) {
    return false;
}

bool USSLevelSequenceUtils::DebugDisableASyncEvaluateWhenBulletControllert(UMovieSceneSequence* InMasterSequence, bool InWithConvert) {
    return false;
}

UMovieSceneTrack* USSLevelSequenceUtils::AddStringTrack(const FMovieSceneBindingProxy& InBinding, const FName InPropertryName, const FString& InPathName, const FString& InDisplayTrackName, const FString& InDefaultValue) {
    return NULL;
}

UMovieSceneTrack* USSLevelSequenceUtils::AddFloatTrack(const FMovieSceneBindingProxy& InBinding, const FName InPropertryName, const FString& InPathName, const FString& InDisplayTrackName, float InDefaultValue) {
    return NULL;
}

bool USSLevelSequenceUtils::AddBindingTagByName(UMovieSceneSequence* InRootSequence, const FString& InRegexPattern, const FName& InAddTagName, const bool InbSameDisplayName) {
    return false;
}


