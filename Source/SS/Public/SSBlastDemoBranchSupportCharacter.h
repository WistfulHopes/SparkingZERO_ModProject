#pragma once
#include "CoreMinimal.h"
#include "ESSBlastDemoBranchType.h"
#include "SSSupportingCharacterData.h"
#include "SSBlastDemoBranchSupportCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSSBlastDemoBranchSupportCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSBlastDemoBranchType BranchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSupportingCharacterData CharacterData;
    
    SS_API FSSBlastDemoBranchSupportCharacter();
};

