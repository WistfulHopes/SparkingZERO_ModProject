#pragma once
#include "CoreMinimal.h"
#include "KoratAttackHomingData.h"
#include "KoratAttackHomingDataList.h"
#include "MutualDataAsset.h"
#include "KoratAtkHmngDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratAtkHmngDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAttackHomingDataList Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAttackHomingData AttackHomingData;
    
    UKoratAtkHmngDataAsset();

};

