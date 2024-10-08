#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriWareErrorInfo.h"
#include "CriWareError.generated.h"

class UCriWareError;

UCLASS(Blueprintable, MinimalAPI)
class UCriWareError : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCriWareError, const FCriWareErrorInfo&, ErrorInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCriWareError OnCriWareError;
    
    UCriWareError();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCriWareError* GetCriWareError();
    
};

