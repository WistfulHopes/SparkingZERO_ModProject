#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSRemoteButton.h"
#include "SSBattleSetupNewCharaIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupNewCharaIcon : public USSRemoteButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaySide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* QuestionTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FreeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FaceImageWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LvNumTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LvNumImageWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LvNumImageScalerValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwapMarkWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwapMarkCustomAnim_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwapMarkCustomAnim_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DPImageVisibilityWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EPBonusImageVisibilityWidgetName;
    
public:
    USSBattleSetupNewCharaIcon();

    UFUNCTION(BlueprintCallable)
    void SetQuestionData();
    
    UFUNCTION(BlueprintCallable)
    void SetFreeData();
    
    UFUNCTION(BlueprintCallable)
    void SetEmptyData();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterData(const FKoratCharacterDataList& InCharacterData);
    
};

