#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.h"
#include "ESSCstRequestCommand.h"
#include "SSBattleSetupRequestCommand.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupRequestCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCstRequestCommand Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemberSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleSetupTransition CameraTransition;
    
    SS_API FSSBattleSetupRequestCommand();
};

