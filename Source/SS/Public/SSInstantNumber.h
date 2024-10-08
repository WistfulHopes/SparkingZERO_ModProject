#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSInstantNumber.generated.h"

class UCurveFloat;
class USSSingleNumber;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSInstantNumber : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberInterpolationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplaySec;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSingleNumber*> WidgetNumbers;
    
public:
    USSInstantNumber();

};

