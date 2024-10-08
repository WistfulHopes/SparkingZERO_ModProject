#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSDownLoadContentsCheckProcess.generated.h"

class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class SS_API USSDownLoadContentsCheckProcess : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSMenuGeneralDialog> MenuGeneralDialog;
    
public:
    USSDownLoadContentsCheckProcess();

};

