#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSDownLoadContentsManager.generated.h"

class USSDownLoadContentsAcquisitionChecker;

UCLASS(Blueprintable)
class SS_API USSDownLoadContentsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsAcquisitionChecker* AcquisitionChecker;
    
public:
    USSDownLoadContentsManager();

};

