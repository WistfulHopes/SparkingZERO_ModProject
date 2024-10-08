#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "SSLaboCharacterPresetDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSLaboCharacterPresetDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList CostumeId;
    
    SS_API FSSLaboCharacterPresetDataAssetRecord();
};

