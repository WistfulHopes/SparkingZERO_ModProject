#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneCharacterTypeDE.h"
#include "KoratDRMEditActionDataList.h"
#include "KoratDRMEditFacialDataList.h"
#include "SSEventSceneCharacterCompileDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCharacterCompileDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEventSceneCharacterTypeDE CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAuraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayActionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySlowTriggerParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditFacialDataList Facial;
    
    SS_API FSSEventSceneCharacterCompileDescriptionDE();
};

