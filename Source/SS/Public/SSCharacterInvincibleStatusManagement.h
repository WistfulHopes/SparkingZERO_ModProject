#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterInvincibleStatus.h"
#include "KoratActionDataList.h"
#include "SSCharacterInvincibleStatusManagement.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSSCharacterInvincibleStatusManagement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterInvincibleStatus InvincibleStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceObject;
    
    SS_API FSSCharacterInvincibleStatusManagement();
};

