#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SSTravelSystemLoadDisplayIf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USSTravelSystemLoadDisplayIf : public UInterface {
    GENERATED_BODY()
};

class ISSTravelSystemLoadDisplayIf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginClose();
    
};

