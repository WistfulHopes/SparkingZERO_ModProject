#include "SSBattleImpactFunctionLibrary.h"

USSBattleImpactFunctionLibrary::USSBattleImpactFunctionLibrary() {
}

void USSBattleImpactFunctionLibrary::ReplacementMontageAssetPath(ULevelSequence* InOutLevelSequence, const FString& InSourceCharacterID, const FString& InSourceBlastType, const FString& InDestCharacterID, const FString& InDestBlastType) {
}

void USSBattleImpactFunctionLibrary::ReplacementAnimationAssetPath(UAnimMontage* InOutAnimMontage, const FString& InSourceCharacterID, const FString& InSourceBlastType, const FString& InDestCharacterID, const FString& InDestBlastType) {
}

void USSBattleImpactFunctionLibrary::GetRegisteredAnimationAssetPath(TArray<FString>& OutAnimationAssetPathList, UAnimMontage* InAnimMontage) {
}

void USSBattleImpactFunctionLibrary::GenerateAssetPath(TArray<FSSBattleImpactAssetPath>& OutAssetMontagePathList, TArray<FSSBattleImpactAssetPath>& OutAssetAnimationPathList, TArray<FSSBattleImpactAssetSetPath>& OutAssetSetPathList, const FString& InSourceCharacterID, const FString& InSourceBlastType, const FString& InDestCharacterID, const FString& InDestBlastType, bool InIsBigCharacter) {
}


