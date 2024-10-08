#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.h"
#include "KoratBattleSetupMenuTransitionData.h"
#include "KoratConversationDataList.h"
#include "MutualDataAsset.h"
#include "KoratShopMenuDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratShopMenuDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupMenuTransitionData> TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FName> CameraSequenceAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList SystemVoice_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList SystemVoice_InsufficientAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList SystemVoice_SoldOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SystemVoice_PurchasePriceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList SystemVoice_PurchaseLessThan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList SystemVoice_PurchaseMoreThan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SystemVoice_AloneTriggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratConversationDataList SystemVoice_Alone;
    
public:
    UKoratShopMenuDataAsset();

};

