#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectMultipleColorData.h"
#include "SSCharacterEffectColorData.generated.h"

class USSEffectColorDataAsset;

UCLASS(Blueprintable)
class USSCharacterEffectColorData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSEffectColorDataAsset*> EffectColorDataAllArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterEffectColorSetData> ActionColorSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectMultipleColorData MultipleEffectColorsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList CharacterEffectColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList CharacterAuraColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList CharacterOutlineColorType;
    
public:
    USSCharacterEffectColorData();

};

