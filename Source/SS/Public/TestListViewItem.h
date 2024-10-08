#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestListViewItem.generated.h"

UCLASS(Blueprintable)
class UTestListViewItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UTestListViewItem();

};

