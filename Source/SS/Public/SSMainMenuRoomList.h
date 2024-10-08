#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSMainMenuRoomList.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuRoomList : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MenuIndexes;
    
    USSMainMenuRoomList();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

