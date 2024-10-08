#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RMAFoliageToolsFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RMAFOLIAGETOOLS_API URMAFoliageToolsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URMAFoliageToolsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetVersion();
    
};

