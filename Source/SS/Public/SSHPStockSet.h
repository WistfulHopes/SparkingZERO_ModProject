#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSHPStockSet.generated.h"

class USSHPStock;

UCLASS(Blueprintable, EditInlineNew)
class USSHPStockSet : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSHPStock*> HPStockWidgets;
    
public:
    USSHPStockSet();

    UFUNCTION(BlueprintCallable)
    void SetStockCount(int32 InStockCount);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStock(int32 InNumStocksToRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddStock(int32 InNumStocksToAdd);
    
};

