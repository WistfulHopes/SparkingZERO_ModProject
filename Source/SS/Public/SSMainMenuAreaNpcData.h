#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataList.h"
#include "SSMainMenuNPC.h"
#include "SSMainMenuAreaNpcData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuAreaNpcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, FSSMainMenuNPC> Characters;
    
    SS_API FSSMainMenuAreaNpcData();
};

