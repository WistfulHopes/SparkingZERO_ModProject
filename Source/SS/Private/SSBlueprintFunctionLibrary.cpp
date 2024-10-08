#include "SSBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

USSBlueprintFunctionLibrary::USSBlueprintFunctionLibrary() {
}

void USSBlueprintFunctionLibrary::WildcardToRegex(const FString& InWildcard, FString& OutString) {
}

bool USSBlueprintFunctionLibrary::ValidateSequenceMPC(const UMovieSceneSequence* InSequence, FString& OutValidateErrText) {
    return false;
}

bool USSBlueprintFunctionLibrary::ValidateSequenceMarkOverlap(const UMovieSceneSequence* InSequence, FString& OutValidateErrText) {
    return false;
}

bool USSBlueprintFunctionLibrary::ValidateSequenceLastMarkEndLabel(const UMovieSceneSequence* InSequence, FString& InEndLabel, FString& OutValidateErrText) {
    return false;
}

bool USSBlueprintFunctionLibrary::ValidateCameras(UMovieSceneSequence* InMasterSequence, FString& OutText) {
    return false;
}

void USSBlueprintFunctionLibrary::StopLoadingScreen(bool bIsEnableWorldRendering) {
}

void USSBlueprintFunctionLibrary::StartShortLoadingScreen() {
}

void USSBlueprintFunctionLibrary::StartScreenFade(const UObject* ContextObject, float FromAlpha, float ToAlpha, float Duration, const FLinearColor Color) {
}

void USSBlueprintFunctionLibrary::StartLongLoadingScreen() {
}

bool USSBlueprintFunctionLibrary::SplitRegex(const FString& InString, const FString& InRegexPatterne, TArray<FString>& OutSplitStrings, int32& OutBeginIndex, int32& OutEndIndex) {
    return false;
}

void USSBlueprintFunctionLibrary::SetControlRigTrack(UMovieSceneControlRigParameterTrack* InTrack, UClass* InClass) {
}

void USSBlueprintFunctionLibrary::SetActorLabel(AActor* Actor, const FString& NewLabel) {
}

FString USSBlueprintFunctionLibrary::ReplaceUnsupportedFont(const FString& SourceStr) {
    return TEXT("");
}

bool USSBlueprintFunctionLibrary::ReplaceRegexFormat(const FString& InString, const FString& InRegexPattern, const FString& InFormat, FString& OutString) {
    return false;
}

bool USSBlueprintFunctionLibrary::ReplaceKoratCharacterWithCostume(ASSCharacter* InReplaceCharacter, const FKoratCharacterDataList InCharacterDataList, const FKoratCharacterCostumeDataList InCostumeDataList) {
    return false;
}

bool USSBlueprintFunctionLibrary::ReplaceKoratCharacter(ASSCharacter* InReplaceCharacter, const FKoratCharacterDataList InCharacterDataList, const int32 InCostumeIndex) {
    return false;
}

bool USSBlueprintFunctionLibrary::RemoveInvalidMPCTrack(UMovieSceneSequence* InSequence, const TArray<FName>& InParameterNames) {
    return false;
}

void USSBlueprintFunctionLibrary::RecyclePooledActor(const UObject* WorldContextObject, AActor* PooledActor) {
}

bool USSBlueprintFunctionLibrary::ReadTextFile(const FString& Filename, TArray<FString>& ReadBuffer) {
    return false;
}

bool USSBlueprintFunctionLibrary::ProjectWorldLocationToNormalizeScreenWithDistance(const APlayerController* InPlayerController, FVector InWorldLocation, FVector& OutScreenLocation) {
    return false;
}

void USSBlueprintFunctionLibrary::PrintCurrentToonParameter(const UObject* InObject) {
}

bool USSBlueprintFunctionLibrary::PrimitiveComponentComputePenetration(FVector& OutMtdDirection, float& OutMtdDistance, UPrimitiveComponent* InBaseComp, UPrimitiveComponent* InMoveComp) {
    return false;
}

void USSBlueprintFunctionLibrary::OpenYesNoDialog(const FString& InString, const FString& InTitle, bool& OutBool) {
}

void USSBlueprintFunctionLibrary::OpenOkDialog(const FString& InString, const FString& InTitle) {
}

void USSBlueprintFunctionLibrary::OpenOkCancelDialog(const FString& InString, const FString& InTitle, bool& OutBool) {
}

bool USSBlueprintFunctionLibrary::OpenImportFileDialog(const FString& DialogTitle, TArray<FString>& OutFilePath) {
    return false;
}

bool USSBlueprintFunctionLibrary::OpenDirectoryDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName) {
    return false;
}

bool USSBlueprintFunctionLibrary::OpenAseetDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutAssetPath) {
    return false;
}

bool USSBlueprintFunctionLibrary::OpenAnyFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& Filter, FString& OutFilePath) {
    return false;
}

void USSBlueprintFunctionLibrary::Join(const UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const EKoratInput2Proccess InProcess) {
}

bool USSBlueprintFunctionLibrary::IsRequestPowerImpactCharacterCombination(const ASSCharacter* InCharacter, const ASSCharacter* InTargetCharacter) {
    return false;
}

bool USSBlueprintFunctionLibrary::IsNetworkBattleAndPlayerId(const APlayerController* InPlayerController, bool& bOutHost, int32& OutPlayerId) {
    return false;
}

bool USSBlueprintFunctionLibrary::IsMyselfPlayerController(const APlayerController* InTargetPlayerController) {
    return false;
}

bool USSBlueprintFunctionLibrary::IsMyselfCharacter(const ASSCharacter* InTargetCharacter) {
    return false;
}

bool USSBlueprintFunctionLibrary::IsMyControlingPlayerController(const APlayerController* InPlayerController) {
    return false;
}

bool USSBlueprintFunctionLibrary::IsMyCharacterPlayerController(const ASSCharacter* InTargetCharacter) {
    return false;
}

bool USSBlueprintFunctionLibrary::IsEditing(const UObject* WorldContext) {
    return false;
}

void USSBlueprintFunctionLibrary::InitActorPool(const UObject* WorldContextObject, const TSubclassOf<AActor> PooledActorClass, const int32 InitPoolSize) {
}

bool USSBlueprintFunctionLibrary::ImportFileToAsset(const TArray<FString>& FileNames, const TArray<FString>& AssetNames, const FString& DestinationPath) {
    return false;
}

void USSBlueprintFunctionLibrary::GetWindParameters(const APawn* Context, FVector& WindDirection, float& WindSpeed, bool& bIsSuccess) {
}

int32 USSBlueprintFunctionLibrary::GetUsedObjectNum(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass) {
    return 0;
}

int32 USSBlueprintFunctionLibrary::GetUnUsedObjectNum(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass) {
    return 0;
}

ASSBattleLevelScriptActor* USSBlueprintFunctionLibrary::GetSSBattleLevelScriptActor(const UObject* WorldContextObject) {
    return NULL;
}

USSSoundManager* USSBlueprintFunctionLibrary::GetSoundPlayer(UObject* WorldContextObject) {
    return NULL;
}

USSReplayManager* USSBlueprintFunctionLibrary::GetReplayUIManager(UObject* WorldContextObject) {
    return NULL;
}

USSReplayDataUIManager* USSBlueprintFunctionLibrary::GetReplayDataUIManager(UObject* WorldContextObject) {
    return NULL;
}

float USSBlueprintFunctionLibrary::GetRateByPositionDistance(FVector InPos0, FVector InPos1, float InDistanceMax, const UCurveFloat* InCurve) {
    return 0.0f;
}

int32 USSBlueprintFunctionLibrary::GetPatternVoiceDefaultCueID(const FName& InPatternVoiceName) {
    return 0;
}

bool USSBlueprintFunctionLibrary::GetPackageNameFromObject(const UObject* Object, FName& PackageName) {
    return false;
}

TArray<FName> USSBlueprintFunctionLibrary::GetMontageMetaDataSocketName(const UAnimMontage* InMontage, const EKoratSocketType InSocketType) {
    return TArray<FName>();
}

void USSBlueprintFunctionLibrary::GetKoratUILevelTransition(const FKoratUILevelDataList InCurrentUILevel, const FName InCondition, FName& OutLevelName, EKoratBranch& OutResult) {
}

void USSBlueprintFunctionLibrary::GetKoratUILevelMasterData(const FKoratUILevelDataList InUILevelDataList, FKoratUILevelDataAssetRecord& OutUILevelData, EKoratBranch& OutResult) {
}

bool USSBlueprintFunctionLibrary::GetKoratRebindActors(const UObject* WorldContextObject, const FName InRebindName, TArray<AActor*>& OutActors) {
    return false;
}

ASSLevelScriptActor* USSBlueprintFunctionLibrary::GetKoratLevelScriptActor(const UObject* WorldContextObject) {
    return NULL;
}

UKoratGameSingleton* USSBlueprintFunctionLibrary::GetKoratGameSingleton() {
    return NULL;
}

USSGameInstance* USSBlueprintFunctionLibrary::GetKoratGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

void USSBlueprintFunctionLibrary::GetKoratCharacterMasterData(const FKoratCharacterDataList InCharacterDataList, FKoratCharacterDataAssetRecord& OutCharacterData, EKoratBranch& OutResult) {
}

void USSBlueprintFunctionLibrary::GetKoratActionMasterData(const FKoratActionDataList InActionDataList, FKoratActionDataAssetRecord& OutActionData, EKoratBranch& OutResult) {
}

float USSBlueprintFunctionLibrary::GetEffectiveTimeDilation(const UObject* WorldContextObject) {
    return 0.0f;
}

bool USSBlueprintFunctionLibrary::GetContentBrowserPath(FString& OutFilePath) {
    return false;
}

void USSBlueprintFunctionLibrary::ExportThmubnailWithPath(const FString& InAssetPath, const FString& InOutputFilePath) {
}

void USSBlueprintFunctionLibrary::ExportThmubnail(UObject* InObject, const FString& InOutputFilePath) {
}

void USSBlueprintFunctionLibrary::ExecPythonScript(const FString& ScriptName) {
}

void USSBlueprintFunctionLibrary::ExecOuterProcess(const FString& ProcessName, const FString& WorkPath) {
}

void USSBlueprintFunctionLibrary::DestroyActorPool(const UObject* WorldContextObject, const TSubclassOf<AActor> PooledActorClass) {
}

void USSBlueprintFunctionLibrary::DelayWithPause(const UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const float Duration) {
}

bool USSBlueprintFunctionLibrary::CorrectLocationWithinWorldRange(AActor* InActor, int32 InOffsetIndex) {
    return false;
}

bool USSBlueprintFunctionLibrary::ComparisonReplaceAnimationDataList(const FKoratReplaceAnimationDataList InAnimDataList1, const FKoratReplaceAnimationDataList InAnimDataList2) {
    return false;
}

bool USSBlueprintFunctionLibrary::CloseEditorUtilityWidget(const FString& ObjectPath) {
    return false;
}

bool USSBlueprintFunctionLibrary::CapsuleTraceMultiWithRotation(const UObject* WorldContextObject, const FVector Start, const FVector END, float Radius, float HalfHeight, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool USSBlueprintFunctionLibrary::CapsuleOverlapComponentsByProfile(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const FRotator Orientation, FName Profile, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool USSBlueprintFunctionLibrary::CapsuleOverlapComponentsByChannel(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const FRotator Orientation, TEnumAsByte<ECollisionChannel> TraceChannel, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

AActor* USSBlueprintFunctionLibrary::BorrowPooledActor(const UObject* WorldContextObject, const TSubclassOf<AActor> ActorClass, const FTransform& Transform) {
    return NULL;
}

FString USSBlueprintFunctionLibrary::AssetSourcePath(bool InSetFlg, UObject* InAsset, const FString& InString) {
    return TEXT("");
}


