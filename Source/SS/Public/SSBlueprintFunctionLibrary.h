#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Engine/LatentActionManager.h"
#include "EKoratBranch.h"
#include "EKoratInput2Proccess.h"
#include "EKoratSocketType.h"
#include "KoratActionDataAssetRecord.h"
#include "KoratActionDataList.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataAssetRecord.h"
#include "KoratCharacterDataList.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratUILevelDataAssetRecord.h"
#include "KoratUILevelDataList.h"
#include "Templates/SubclassOf.h"
#include "SSBlueprintFunctionLibrary.generated.h"

class AActor;
class APawn;
class APlayerController;
class ASSBattleLevelScriptActor;
class ASSCharacter;
class ASSLevelScriptActor;
class UAnimMontage;
class UCurveFloat;
class UKoratGameSingleton;
class UMovieSceneControlRigParameterTrack;
class UMovieSceneSequence;
class UObject;
class UPrimitiveComponent;
class USSGameInstance;
class USSReplayDataUIManager;
class USSReplayManager;
class USSSoundManager;

UCLASS(Blueprintable, MinimalAPI)
class USSBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void WildcardToRegex(const FString& InWildcard, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateSequenceMPC(const UMovieSceneSequence* InSequence, FString& OutValidateErrText);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateSequenceMarkOverlap(const UMovieSceneSequence* InSequence, FString& OutValidateErrText);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateSequenceLastMarkEndLabel(const UMovieSceneSequence* InSequence, UPARAM(Ref) FString& InEndLabel, FString& OutValidateErrText);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateCameras(UMovieSceneSequence* InMasterSequence, FString& OutText);
    
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen(bool bIsEnableWorldRendering);
    
    UFUNCTION(BlueprintCallable)
    static void StartShortLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void StartScreenFade(const UObject* ContextObject, float FromAlpha, float ToAlpha, float Duration, const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    static void StartLongLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static bool SplitRegex(const FString& InString, const FString& InRegexPatterne, TArray<FString>& OutSplitStrings, int32& OutBeginIndex, int32& OutEndIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetControlRigTrack(UMovieSceneControlRigParameterTrack* InTrack, UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorLabel(AActor* Actor, const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable)
    static FString ReplaceUnsupportedFont(const FString& SourceStr);
    
    UFUNCTION(BlueprintCallable)
    static bool ReplaceRegexFormat(const FString& InString, const FString& InRegexPattern, const FString& InFormat, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    static bool ReplaceKoratCharacterWithCostume(ASSCharacter* InReplaceCharacter, const FKoratCharacterDataList InCharacterDataList, const FKoratCharacterCostumeDataList InCostumeDataList);
    
    UFUNCTION(BlueprintCallable)
    static bool ReplaceKoratCharacter(ASSCharacter* InReplaceCharacter, const FKoratCharacterDataList InCharacterDataList, const int32 InCostumeIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveInvalidMPCTrack(UMovieSceneSequence* InSequence, const TArray<FName>& InParameterNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RecyclePooledActor(const UObject* WorldContextObject, AActor* PooledActor);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadTextFile(const FString& Filename, TArray<FString>& ReadBuffer);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectWorldLocationToNormalizeScreenWithDistance(const APlayerController* InPlayerController, FVector InWorldLocation, FVector& OutScreenLocation);
    
    UFUNCTION(BlueprintCallable)
    static void PrintCurrentToonParameter(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static bool PrimitiveComponentComputePenetration(FVector& OutMtdDirection, float& OutMtdDistance, UPrimitiveComponent* InBaseComp, UPrimitiveComponent* InMoveComp);
    
    UFUNCTION(BlueprintCallable)
    static void OpenYesNoDialog(const FString& InString, const FString& InTitle, bool& OutBool);
    
    UFUNCTION(BlueprintCallable)
    static void OpenOkDialog(const FString& InString, const FString& InTitle);
    
    UFUNCTION(BlueprintCallable)
    static void OpenOkCancelDialog(const FString& InString, const FString& InTitle, bool& OutBool);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenImportFileDialog(const FString& DialogTitle, UPARAM(Ref) TArray<FString>& OutFilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenDirectoryDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenAseetDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenAnyFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& Filter, FString& OutFilePath);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    static void Join(const UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const EKoratInput2Proccess InProcess);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRequestPowerImpactCharacterCombination(const ASSCharacter* InCharacter, const ASSCharacter* InTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNetworkBattleAndPlayerId(const APlayerController* InPlayerController, bool& bOutHost, int32& OutPlayerId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMyselfPlayerController(const APlayerController* InTargetPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMyselfCharacter(const ASSCharacter* InTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMyControlingPlayerController(const APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMyCharacterPlayerController(const ASSCharacter* InTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsEditing(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitActorPool(const UObject* WorldContextObject, const TSubclassOf<AActor> PooledActorClass, const int32 InitPoolSize);
    
    UFUNCTION(BlueprintCallable)
    static bool ImportFileToAsset(const TArray<FString>& FileNames, const TArray<FString>& AssetNames, const FString& DestinationPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindParameters(const APawn* Context, FVector& WindDirection, float& WindSpeed, bool& bIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetUsedObjectNum(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetUnUsedObjectNum(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASSBattleLevelScriptActor* GetSSBattleLevelScriptActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USSSoundManager* GetSoundPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USSReplayManager* GetReplayUIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USSReplayDataUIManager* GetReplayDataUIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetRateByPositionDistance(FVector InPos0, FVector InPos1, float InDistanceMax, const UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPatternVoiceDefaultCueID(const FName& InPatternVoiceName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPackageNameFromObject(const UObject* Object, FName& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetMontageMetaDataSocketName(const UAnimMontage* InMontage, const EKoratSocketType InSocketType);
    
    UFUNCTION(BlueprintCallable)
    static void GetKoratUILevelTransition(const FKoratUILevelDataList InCurrentUILevel, const FName InCondition, FName& OutLevelName, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void GetKoratUILevelMasterData(const FKoratUILevelDataList InUILevelDataList, FKoratUILevelDataAssetRecord& OutUILevelData, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetKoratRebindActors(const UObject* WorldContextObject, const FName InRebindName, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASSLevelScriptActor* GetKoratLevelScriptActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UKoratGameSingleton* GetKoratGameSingleton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USSGameInstance* GetKoratGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetKoratCharacterMasterData(const FKoratCharacterDataList InCharacterDataList, FKoratCharacterDataAssetRecord& OutCharacterData, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void GetKoratActionMasterData(const FKoratActionDataList InActionDataList, FKoratActionDataAssetRecord& OutActionData, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetEffectiveTimeDilation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetContentBrowserPath(FString& OutFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void ExportThmubnailWithPath(const FString& InAssetPath, const FString& InOutputFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void ExportThmubnail(UObject* InObject, const FString& InOutputFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void ExecPythonScript(const FString& ScriptName);
    
    UFUNCTION(BlueprintCallable)
    static void ExecOuterProcess(const FString& ProcessName, const FString& WorkPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyActorPool(const UObject* WorldContextObject, const TSubclassOf<AActor> PooledActorClass);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    static void DelayWithPause(const UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    static bool CorrectLocationWithinWorldRange(AActor* InActor, int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ComparisonReplaceAnimationDataList(const FKoratReplaceAnimationDataList InAnimDataList1, const FKoratReplaceAnimationDataList InAnimDataList2);
    
    UFUNCTION(BlueprintCallable)
    static bool CloseEditorUtilityWidget(const FString& ObjectPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceMultiWithRotation(const UObject* WorldContextObject, const FVector Start, const FVector END, float Radius, float HalfHeight, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapComponentsByProfile(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const FRotator Orientation, FName Profile, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapComponentsByChannel(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const FRotator Orientation, TEnumAsByte<ECollisionChannel> TraceChannel, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* BorrowPooledActor(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static FString AssetSourcePath(bool InSetFlg, UObject* InAsset, const FString& InString);
    
};

