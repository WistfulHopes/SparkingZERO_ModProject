#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataUIType.h"
#include "KoratCharacterDataList.h"
#include "KoratMapDataList.h"
#include "MutualDataAsset.h"
#include "SSGalleryMyDataDataAsset.generated.h"

UCLASS(Blueprintable)
class USSGalleryMyDataDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FKoratMapDataList EscapeEffectCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FKoratMapDataList BrakeEffectCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultUseRateCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSGalleryMyDataUIType, TSoftClassPtr<UObject>> PtrRecords;
    
public:
    USSGalleryMyDataDataAsset();

};

