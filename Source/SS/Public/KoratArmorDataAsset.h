#pragma once
#include "CoreMinimal.h"
#include "ESSHitEffectType.h"
#include "KoratEffectHitDataList.h"
#include "MutualDataAsset.h"
#include "KoratArmorDataAsset.generated.h"

class USSArmorDataAsset;

UCLASS(Blueprintable)
class UKoratArmorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectHitDataList ArmorEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSHitEffectType, FKoratEffectHitDataList> HitTypeArmorEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectHitDataList ArmorBreakEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSArmorDataAsset*> PtrRecords;
    
public:
    UKoratArmorDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNameArrayOnBP();
    
};

