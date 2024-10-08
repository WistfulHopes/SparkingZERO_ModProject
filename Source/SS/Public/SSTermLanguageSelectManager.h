#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "SSMenuManager.h"
#include "SSTermLanguageSelectManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTermLanguageSelectManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> ButtonTex;
    
public:
    USSTermLanguageSelectManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnDecideButton();
    
};

