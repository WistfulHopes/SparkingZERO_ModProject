#pragma once
#include "CoreMinimal.h"
#include "EKoratDirection.h"
#include "KoratActionDataList.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSCombativesSubDataAsset.generated.h"

UCLASS(Blueprintable)
class USSCombativesSubDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDirection AttackDiretion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlashAttack;
    
    USSCombativesSubDataAsset();

};

