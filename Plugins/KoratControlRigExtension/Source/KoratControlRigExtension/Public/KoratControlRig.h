#pragma once
#include "CoreMinimal.h"
#include "ControlRig.h"
#include "KoratControlRig.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KORATCONTROLRIGEXTENSION_API UKoratControlRig : public UControlRig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReplaceTag;
    
public:
    UKoratControlRig();

};

