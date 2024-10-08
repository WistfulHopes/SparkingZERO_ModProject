#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratDownLoadContentsDataList.h"
#include "SSDownLoadContentsAcquisitionChecker.generated.h"

UCLASS(Blueprintable)
class SS_API USSDownLoadContentsAcquisitionChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratDownLoadContentsDataList> DLCRightsAcquiredAlready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratDownLoadContentsDataList> DLCRightsAcquiredNew;
    
public:
    USSDownLoadContentsAcquisitionChecker();

};

