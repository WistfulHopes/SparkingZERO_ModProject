#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSAreaEditorMessage.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class USSAreaEditorMessage : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> messageAreaList;
    
public:
    USSAreaEditorMessage();

    UFUNCTION(BlueprintCallable)
    void Setup(TArray<UTextBlock*> InWdgetList);
    
    UFUNCTION(BlueprintCallable)
    void SetMessage(TArray<FString> InMessages);
    
};

