#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectMultipleColorData.generated.h"

class ASSCharacter;
class UKoratEffectColorTypeReplaceDataAsset;

USTRUCT(BlueprintType)
struct SS_API FKoratEffectMultipleColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterEffectColorSetDataTypeDataList, FKoratCharacterEffectColorSetData> ColorTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratEffectColorTypeReplaceDataAsset* ReplaceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugSourceCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> DebugSourceCharacter;
    
    FKoratEffectMultipleColorData();
};

