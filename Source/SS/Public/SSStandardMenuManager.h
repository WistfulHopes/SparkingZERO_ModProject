#pragma once
#include "CoreMinimal.h"
#include "KoratUILevelDataList.h"
#include "SSMenuManager.h"
#include "SSStandardMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSStandardMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* CurrentWidget;
    
public:
    USSStandardMenuManager();

    UFUNCTION(BlueprintCallable)
    void OpenWindowNew(const TSoftClassPtr<USSMenuManager> widgetWindow);
    
    UFUNCTION(BlueprintCallable)
    void OnGoToButtonNew(const FKoratUILevelDataList Index);
    
};

