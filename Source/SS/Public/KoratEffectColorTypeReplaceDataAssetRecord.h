#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectColorTypeReplaceDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectColorTypeReplaceDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList SrcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList ReplacedType;
    
    SS_API FKoratEffectColorTypeReplaceDataAssetRecord();
};

