#pragma once
#include "CoreMinimal.h"
#include "EWishCategory.h"
#include "SSMenuSceneController.h"
#include "SSWishComeTrueContentDataAssetRecord.h"
#include "SSWishComeTrueRewardData.h"
#include "SSWishComeTrueController.generated.h"

class ASSCharacter;
class ASSCutCameraActor;
class ASSLevelSequenceActor;
class ASSMenuCharacter;
class USSOperationGuideSet;
class USSWCTSubtitle;
class USSWCTWishSelector;

UCLASS(Blueprintable)
class ASSWishComeTrueController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSMenuCharacter* DragonMenuCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* DragonCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSWCTWishSelector* WishSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSWCTSubtitle* SubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWishCategory CurrentWishCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSWishComeTrueContentDataAssetRecord CurrentContentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSWishComeTrueRewardData> SelectedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* DragonSequenceActor;
    
public:
    ASSWishComeTrueController(const FObjectInitializer& ObjectInitializer);

};

