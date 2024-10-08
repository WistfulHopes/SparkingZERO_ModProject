#pragma once
#include "CoreMinimal.h"
#include "SSMenuPlayerController.h"
#include "Templates/SubclassOf.h"
#include "SSTestPersScrollPlayerController.generated.h"

class USSMenuViewScroll;
class USSRemoteButton;

UCLASS(Blueprintable)
class ASSTestPersScrollPlayerController : public ASSMenuPlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USSMenuViewScroll> ScrollBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* ScrollMenu;
    
public:
    ASSTestPersScrollPlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CallbackButtonDataChange(USSRemoteButton* InButton, int32 InDataIdx);
    
};

