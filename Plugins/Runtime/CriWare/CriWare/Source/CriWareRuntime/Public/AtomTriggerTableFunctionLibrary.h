#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomTriggerRow.h"
#include "AtomTriggerTableFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomTriggerTableFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FAtomTriggerRow& OutRow);
    
};

