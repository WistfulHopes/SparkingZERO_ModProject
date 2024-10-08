#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterCostumeIdData.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterCostumeIdData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString CostumeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterIdEnabled;
    
    SS_API FKoratCharacterCostumeIdData();
};

