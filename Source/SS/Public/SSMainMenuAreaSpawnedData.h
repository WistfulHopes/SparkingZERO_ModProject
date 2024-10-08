#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataList.h"
#include "SSMainMenuAreaSpawnedData.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSMainMenuAreaSpawnedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, ASSCharacter*> Characters;
    
    SS_API FSSMainMenuAreaSpawnedData();
};

