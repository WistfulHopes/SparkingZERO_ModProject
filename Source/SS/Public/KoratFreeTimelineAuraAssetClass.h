#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratAuraRimLightDataList.h"
#include "KoratRimLightFrequencyDataList.h"
#include "KoratFreeTimelineAuraAssetClass.generated.h"

class ASSCharacter;
class UKoratFreeTimelineAuraAssetGetComp;
class ULevelSequence;

UCLASS(Blueprintable)
class UKoratFreeTimelineAuraAssetClass : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraRimLightDataList AuraRimLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyDataList Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSCharacter> SSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKoratFreeTimelineAuraAssetGetComp> SSComp;
    
    UKoratFreeTimelineAuraAssetClass();

};

