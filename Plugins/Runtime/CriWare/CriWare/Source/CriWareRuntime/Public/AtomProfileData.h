#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomProfileItem.h"
#include "EAtomProfileSortType.h"
#include "EAtomSortOrderType.h"
#include "AtomProfileData.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomProfileData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomProfileData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FAtomProfileItem> CriWareAdx2ProfileDataUpdate(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CriWareAdx2ProfileDataSort(TArray<FAtomProfileItem> original_item, EAtomProfileSortType sort_type, EAtomSortOrderType order_type, TArray<FAtomProfileItem>& sorted_item);
    
};

