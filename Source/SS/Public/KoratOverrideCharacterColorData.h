#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratCustomEffectColorData.h"
#include "KoratOverrideCharacterColorData.generated.h"

USTRUCT(BlueprintType)
struct FKoratOverrideCharacterColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> SelectCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCustomEffectColorData CustomColorData;
    
    SS_API FKoratOverrideCharacterColorData();
};

