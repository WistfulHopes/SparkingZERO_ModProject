#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSStylePanel.generated.h"

class URichTextBlock;
class USSStyleSet;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class USSStylePanel : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSStyleSet*> StyleSetWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> StyleFaceImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> StyleActiveFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ConsumeBlastStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ChangeLeftButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ChangeRightButtonGuide;
    
public:
    USSStylePanel();

    UFUNCTION(BlueprintCallable)
    void SetStyleSetIndex(int32 InStyleSetIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleIconImage(int32 InStylePageIndex, int32 InStyleIndex, UTexture* InImage);
    
    UFUNCTION(BlueprintCallable)
    void SetNumDisplayedStyleSets(int32 InNumStyleSets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWait3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWait2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWait1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange3Right();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange3Left();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange2();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumDisplayedStyleSets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStylePageIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableStyle(int32 InStylePageIndex, int32 InStyleIndex, int32 InConsumeBlastStock);
    
    UFUNCTION(BlueprintCallable)
    void DisableStyle(int32 InStylePageIndex, int32 InStyleIndex, int32 InConsumeBlastStock);
    
    UFUNCTION(BlueprintCallable)
    void DecideStyle(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeRight();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLeft();
    
};

