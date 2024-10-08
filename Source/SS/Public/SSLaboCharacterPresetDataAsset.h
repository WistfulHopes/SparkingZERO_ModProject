#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SSLaboCharacterPresetDataAssetRecord.h"
#include "SSLaboCharacterPresetDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USSLaboCharacterPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMakeCharacterIdTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCharacterIdApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditableEquipmentItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipmentDefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSLaboCharacterPresetDataAssetRecord> Records;
    
public:
    USSLaboCharacterPresetDataAsset();

};

