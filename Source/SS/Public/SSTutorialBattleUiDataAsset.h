#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "ESSTutorialBattleUiType.h"
#include "KoratAiTypeDataList.h"
#include "KoratBattleConversation.h"
#include "KoratTutorialButtonTextData.h"
#include "KoratTutorialCharaHPLimit.h"
#include "MutualDataAsset.h"
#include "SSTutorialBattleUiDataAsset.generated.h"

UCLASS(Blueprintable)
class USSTutorialBattleUiDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSTutorialBattleUiType, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, FKoratTutorialButtonTextData> TutorialBattleKeyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratAiTypeDataList> PhaseAiTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratTutorialButtonTextData> TutorialUiText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratTutorialButtonTextData> TutorialTipsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAiTypeDataList, int32> AiTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AiLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTutorialCharaHPLimit CharaHPLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipsViewTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipsWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> BattleStartConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> BattleKidanConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> BattleEndConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoKeyInputTime;
    
public:
    USSTutorialBattleUiDataAsset();

};

