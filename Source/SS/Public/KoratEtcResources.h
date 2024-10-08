#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterPointLightData.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratEffectMultipleColorData.h"
#include "KoratInteractAttributeData.h"
#include "KoratEtcResources.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FKoratEtcResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasCharacterEffectColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasWorldPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData CharacterEffectColorSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectMultipleColorData CharacterEffectMultipleColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail CharacterEffectColorDeataDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData WorldPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAttributeData EffectInteractData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> SourceCharacter;
    
    SS_API FKoratEtcResources();
};

