#pragma once
#include "CoreMinimal.h"
#include "EKoratActionCategoryType.h"
#include "EKoratActionSubCategoryType.h"
#include "KoratActionDataList.h"
#include "SSCharacterWarpCommandInfo.h"
#include "SSCharacterWarpCmdTransporter.generated.h"

class AActor;
class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSCharacterWarpCmdTransporter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSCharacterWarpCommandInfo CommandInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActiveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratActionCategoryType ActiveActionMainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratActionSubCategoryType ActiveActionSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName LocatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    SS_API FSSCharacterWarpCmdTransporter();
};

