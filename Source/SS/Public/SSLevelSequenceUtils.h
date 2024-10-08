#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneBindingProxy.h"
#include "MovieSceneObjectBindingID.h"
#include "EKoratLevelSequenceValidateResultType.h"
#include "KoratMovieSceneSequenceGetter.h"
#include "SSLevelSequenceUtils.generated.h"

class AActor;
class ALevelSequenceActor;
class UEnum;
class ULevelSequence;
class UMovieScene;
class UMovieSceneByteTrack;
class UMovieSceneSequence;
class UMovieSceneTrack;

UCLASS(Blueprintable)
class SS_API USSLevelSequenceUtils : public UObject {
    GENERATED_BODY()
public:
    USSLevelSequenceUtils();

    UFUNCTION(BlueprintCallable)
    static EKoratLevelSequenceValidateResultType ValidSetMuteControlRigTrack(UMovieSceneSequence* InSequence);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool ValidSectionOuter(ULevelSequence* InSequence);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool ValidRebindEvent(ULevelSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    static EKoratLevelSequenceValidateResultType ValidIrregularBingingID(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    static EKoratLevelSequenceValidateResultType ValidateSpawnableTrack(UMovieScene* InMovieScene, FString& InResultMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateBindingTag(UMovieSceneSequence* InRootSequence);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideTransformOriginActor(ALevelSequenceActor* InLevelSequenceActor, AActor* InActorToOverride, bool bWithEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideTransformOrigin(ALevelSequenceActor* InLevelSequenceActor, const FTransform& InTransform, bool bWithEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBindingActorByName(AActor* InActorToRebind, ALevelSequenceActor* InLevelSequenceActor, const FString& InRegexPattern);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBindingActorByBindingIDs(AActor* InActorToRebind, ALevelSequenceActor* InLevelSequenceActor, const TArray<FMovieSceneObjectBindingID>& InBindingIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBindingActorByBindingID(AActor* InActorToRebind, ALevelSequenceActor* InLevelSequenceActor, const FMovieSceneObjectBindingID& InBindingId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetOverrideTransformOrigin(ALevelSequenceActor* InLevelSequenceActor, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    static void ResetBindingActorByName(ALevelSequenceActor* InLevelSequenceActor, const FString& InRegexPattern);
    
    UFUNCTION(BlueprintCallable)
    static void ResetBindingActorByBindingIDs(ALevelSequenceActor* InLevelSequenceActor, const TArray<FMovieSceneObjectBindingID>& InBindingIDs);
    
    UFUNCTION(BlueprintCallable)
    static void ResetBindingActorByBindingID(ALevelSequenceActor* InLevelSequenceActor, const FMovieSceneObjectBindingID& InBindingId);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool ReplaceTemporaryCharacter(ULevelSequence* InLevelSequence, UClass* InNewClass);
    
    UFUNCTION(BlueprintCallable)
    static bool ReplaceCharacterVisibilityTrack(ULevelSequence* InLevelSequence);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool RemoveindingTagByName(UMovieSceneSequence* InRootSequence, const FString& InRegexPattern, const FName& InRemoveTagName, const bool InbSameDisplayName);
    
private:
    UFUNCTION(BlueprintCallable)
    static void ModifyColorOfParticleParameter(ULevelSequence* InLevelSequence, const FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    static void MarkModify(ULevelSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEqualEnum(const UMovieSceneByteTrack* InByteTrack, const UEnum* InEnum);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetOverrideTransform(ALevelSequenceActor* InSequenceActor, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneSequence*> GetAllSequence(UMovieSceneSequence* InRootSequence, const bool InCheckActiveSection);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool ForceChangeCharacterID(ULevelSequence* InSequence, UClass* InNewClass, const FString& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    static UEnum* FindNativeEnum(const FString& InEnumPath);
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneObjectBindingID> FindBindingIDsByName(FKoratMovieSceneSequenceGetter InSequenceGetter, const FString& InRegexPattern);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugDisableASyncEvaluateWhenTimeDilation(UMovieSceneSequence* InMasterSequence, bool InWithConvert);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugDisableASyncEvaluateWhenBulletControllert(UMovieSceneSequence* InMasterSequence, bool InWithConvert);
    
private:
    UFUNCTION(BlueprintCallable)
    static UMovieSceneTrack* AddStringTrack(const FMovieSceneBindingProxy& InBinding, const FName InPropertryName, const FString& InPathName, const FString& InDisplayTrackName, const FString& InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneTrack* AddFloatTrack(const FMovieSceneBindingProxy& InBinding, const FName InPropertryName, const FString& InPathName, const FString& InDisplayTrackName, float InDefaultValue);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool AddBindingTagByName(UMovieSceneSequence* InRootSequence, const FString& InRegexPattern, const FName& InAddTagName, const bool InbSameDisplayName);
    
};

