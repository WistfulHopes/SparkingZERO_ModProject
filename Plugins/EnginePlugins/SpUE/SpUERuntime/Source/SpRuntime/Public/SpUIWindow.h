#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/ContentWidget.h"
#include "OnCloseClickedEventDelegate.h"
#include "OnMinimizeClickedEventDelegate.h"
#include "SpUIWindow.generated.h"

UCLASS(Blueprintable)
class SPRUNTIME_API USpUIWindow : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D windowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTitleBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WindowTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TitleBarBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ContentBoxBrush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinimizeClickedEvent OnMinimizeClickedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinimizeClickedEvent OnMaximizeClickedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseClickedEvent OnCloseClickedEvent;
    
public:
    USpUIWindow();

    UFUNCTION(BlueprintCallable)
    void SetWindowPosition(const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    void DestroyWindow();
    
};

