#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterDataSearchParameter.h"
#include "SSCharacterSearch.generated.h"

class UKoratSearchParamDataAsset;

UCLASS(Blueprintable)
class USSCharacterSearch : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchParamDataAsset* CharacterSearchParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchParamDataAsset* EquipSearchParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterDataSearchParameter CharacterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterDataSearchParameter EquipParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterDataSearchParameter ScaledCharacterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterDataSearchParameter ScaledEquipParameter;
    
public:
    USSCharacterSearch();

};

