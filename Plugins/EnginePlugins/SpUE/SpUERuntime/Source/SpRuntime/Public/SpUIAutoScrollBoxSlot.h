#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Components/PanelSlot.h"
#include "SpUIAutoScrollBoxSlot.generated.h"

UCLASS(Blueprintable)
class SPRUNTIME_API USpUIAutoScrollBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
public:
    USpUIAutoScrollBoxSlot();

};

