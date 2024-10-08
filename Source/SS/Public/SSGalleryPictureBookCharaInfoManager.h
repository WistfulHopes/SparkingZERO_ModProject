#pragma once
#include "CoreMinimal.h"
#include "SSGalleryPictureBookMenuManager.h"
#include "SSGalleryPictureBookCharaInfoManager.generated.h"

class USSBuiltInMenu;
class USSMenuButtonGuideHold;
class USpUIScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class USSGalleryPictureBookCharaInfoManager : public USSGalleryPictureBookMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USSMenuButtonGuideHold*> PageChangeButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSGalleryPictureBookCharaInfoManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPage() const;
    
};

