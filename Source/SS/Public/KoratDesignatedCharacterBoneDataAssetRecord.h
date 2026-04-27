#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterBoneDataAssetRecord.h"
#include "KoratCharacterDataList.h"
#include "KoratDesignatedCharacterBoneDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratDesignatedCharacterBoneDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKoratCharacterDataList> DesignatedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBoneDataAssetRecord CharacterBoneDataAssetRecord;
    
    SS_API FKoratDesignatedCharacterBoneDataAssetRecord();
};

