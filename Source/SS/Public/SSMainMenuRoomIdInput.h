#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuWidgetFromList.h"
#include "SSMainMenuRoomIdInput.generated.h"

class USSRoomIdInputWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuRoomIdInput : public USSMainMenuWidgetFromList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MenuIndexes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSRoomIdInputWidget* RoomIdInputWidget;
    
public:
    USSMainMenuRoomIdInput();

    UFUNCTION(BlueprintCallable)
    void OnFocusedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
};

