#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorReplaceTypeDataList.h"
#include "KoratEffectMultipleColorData.h"
#include "KoratEffectColorDataDetail.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectColorDataDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectMultipleColorData MultipleEffectColorsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterEffectColorReplaceTypeDataList> ReplaceSettingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterEffectColorReplaceTypeDataList> OverwriteReplaceSetting;
    
    FKoratEffectColorDataDetail();
};

