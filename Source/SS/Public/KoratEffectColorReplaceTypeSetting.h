#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorReplaceTypeDataList.h"
#include "KoratEffectColorReplaceTypeSetting.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEffectColorReplaceTypeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterEffectColorReplaceTypeDataList> SettingList;
    
    FKoratEffectColorReplaceTypeSetting();
};

