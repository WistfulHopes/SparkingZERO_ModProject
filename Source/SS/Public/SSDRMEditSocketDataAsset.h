#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MutualDataAsset.h"
#include "SSDRMEditSocketDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDRMEditSocketDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StandardTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseFlags;
    
    USSDRMEditSocketDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTransform();
    
};

