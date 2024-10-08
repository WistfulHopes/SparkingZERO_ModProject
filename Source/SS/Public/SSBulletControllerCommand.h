#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBulletControlCommand.h"
#include "KoratActionDataList.h"
#include "KoratBulletKeyDataList.h"
#include "SSBulletControllerCommand.generated.h"

class ASSBulletController;
class ASSCharacter;
class UKoratEffectMultipleColorComponent;

USTRUCT(BlueprintType)
struct FSSBulletControllerCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBulletControlCommand CommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBulletKeyDataList BulletKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupporterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FireSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UKoratEffectMultipleColorComponent> EffectMultipleColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ControllerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSBulletController> BulletController;
    
    SS_API FSSBulletControllerCommand();
};

