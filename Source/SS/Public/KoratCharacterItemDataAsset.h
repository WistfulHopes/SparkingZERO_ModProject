#pragma once
#include "CoreMinimal.h"
#include "KoratBattleZItemUnLockChkData.h"
#include "MutualDataAsset.h"
#include "KoratCharacterItemDataAsset.generated.h"

class USSCharacterItemDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSCharacterItemDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleZItemUnLockChkData> ZItemUnLockChkData;
    
public:
    UKoratCharacterItemDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterItemName(const FName& InKey) const;
    
};

