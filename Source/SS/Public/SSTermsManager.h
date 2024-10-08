#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "SSMenuManager.h"
#include "SSTermsManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class USSTermsManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> CultureMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateFontInfo> FontAssetsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableEulaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableButtonText;
    
public:
    USSTermsManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnDecideButton();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLanguageButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyInput();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCancelButton();
    
};

