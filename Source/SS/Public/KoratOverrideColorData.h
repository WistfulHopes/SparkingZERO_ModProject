#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratCustomEffectColorData.h"
#include "KoratOverrideCharacterColorData.h"
#include "KoratOverrideColorData.generated.h"

USTRUCT(BlueprintType)
struct FKoratOverrideColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> DefaultIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCustomEffectColorData Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratOverrideCharacterColorData> CustomRecoreds;
    
    SS_API FKoratOverrideColorData();
};

