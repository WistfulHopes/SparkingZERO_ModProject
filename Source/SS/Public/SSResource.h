#pragma once
#include "CoreMinimal.h"
#include "SSResource.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSSResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BaseFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    SS_API FSSResource();
};

