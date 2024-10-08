#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastSlotType.h"
#include "KoratCharacterDataBlastComboParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataBlastComboParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBlastSlotType BlastSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScale;
    
    SS_API FKoratCharacterDataBlastComboParameter();
};

