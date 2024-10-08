#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSSortFilterList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSSortFilterList : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOpacity;
    
public:
    USSSortFilterList();

};

