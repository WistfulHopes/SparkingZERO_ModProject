#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "WindSimFieldMotor.generated.h"

class UWindSimFieldMotorComponent;

UCLASS(Blueprintable)
class WINDSIMSHADER_API AWindSimFieldMotor : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindSimFieldMotorComponent* MotorComponent;
    
public:
    AWindSimFieldMotor(const FObjectInitializer& ObjectInitializer);

};

