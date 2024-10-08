#pragma once
#include "CoreMinimal.h"
#include "SSLaboCharacterPresetDataAssetRecord.h"
#include "SSLaboCompoCharacterIdInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSLaboCompoCharacterIdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMakeCharacterIdTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCharacterIdApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditableEquipmentItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipmentDefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSLaboCharacterPresetDataAssetRecord> Presets;
    
    SS_API FSSLaboCompoCharacterIdInfo();
};

