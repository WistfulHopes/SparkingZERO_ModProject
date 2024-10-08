#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "DataManaMovie.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UDataManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
    UDataManaMovie();

    UFUNCTION(BlueprintCallable)
    void SetDataArray(UPARAM(Ref) TArray<uint8>& InDataArray);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetDataArray();
    
};

