#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SSBattleImpactAssetPath.h"
#include "SSBattleImpactAssetSetPath.h"
#include "SSBattleImpactFunctionLibrary.generated.h"

class UAnimMontage;
class ULevelSequence;

UCLASS(Blueprintable)
class USSBattleImpactFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USSBattleImpactFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ReplacementMontageAssetPath(ULevelSequence* InOutLevelSequence, const FString& InSourceCharacterID, const FString& InSourceBlastType, const FString& InDestCharacterID, const FString& InDestBlastType);
    
    UFUNCTION(BlueprintCallable)
    static void ReplacementAnimationAssetPath(UAnimMontage* InOutAnimMontage, const FString& InSourceCharacterID, const FString& InSourceBlastType, const FString& InDestCharacterID, const FString& InDestBlastType);
    
    UFUNCTION(BlueprintCallable)
    static void GetRegisteredAnimationAssetPath(TArray<FString>& OutAnimationAssetPathList, UAnimMontage* InAnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateAssetPath(TArray<FSSBattleImpactAssetPath>& OutAssetMontagePathList, TArray<FSSBattleImpactAssetPath>& OutAssetAnimationPathList, TArray<FSSBattleImpactAssetSetPath>& OutAssetSetPathList, const FString& InSourceCharacterID, const FString& InSourceBlastType, const FString& InDestCharacterID, const FString& InDestBlastType, bool InIsBigCharacter);
    
};

