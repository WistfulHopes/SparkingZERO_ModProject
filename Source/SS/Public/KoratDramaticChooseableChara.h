#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratDramaticChooseableChara.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticChooseableChara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterData;
    
    SS_API FKoratDramaticChooseableChara();
};

