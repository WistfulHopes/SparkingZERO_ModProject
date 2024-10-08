#pragma once
#include "CoreMinimal.h"
#include "EKoratActionAttackType.h"
#include "EKoratBattleDirectingAction.h"
#include "EKoratBattleDirectingCharacterStateType.h"
#include "EKoratBattleDirectingConditionTargetType.h"
#include "EKoratDramaticDirectingTriggerListItem.h"
#include "EKoratDramaticDirectionrListItem.h"
#include "KoraDramaticInsertAiTypeTextData.h"
#include "KoraDramaticInsertAtackTypeTextData.h"
#include "KoraDramaticInsertBuffTextData.h"
#include "KoraDramaticInsertCharacterStateTextData.h"
#include "KoraDramaticInsertConditionsActionTextData.h"
#include "KoraDramaticInsertDirectionTextData.h"
#include "KoraDramaticInsertTargetTextData.h"
#include "KoraDramaticInsertTriggerTextData.h"
#include "KoraDramaticInsertZItemTextData.h"
#include "KoratAiTypeDataList.h"
#include "KoratBattleDirectingBuffDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "MutualDataAsset.h"
#include "KoratDramaticBattleDataAsset.generated.h"

class UKoratDramaticBattleCommonDataAsset;
class ULevelSequence;
class UWorld;

UCLASS(Blueprintable)
class UKoratDramaticBattleDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrOpeningSceneRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrEndingSceneRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> CameraSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticDirectionrListItem, FKoratDramaticDirectionItemListElement> DirectingActivateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertDirectionTextData InsertDirectingActivateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticDirectingTriggerListItem, FKoratDramaticDirectionItemListElement> TrrigerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertTriggerTextData InsertTriggerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratActionAttackType, FKoratDramaticDirectionItemListElement> AtackTypeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertAtackTypeTextData InsertAtackTypeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleDirectingCharacterStateType, FKoratDramaticDirectionItemListElement> CharacterStateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertCharacterStateTextData InsertCharacterStateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleDirectingAction, FKoratDramaticDirectionItemListElement> ConditionsActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertConditionsActionTextData InsertConditionsActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleDirectingAction, FKoratDramaticDirectionItemListElement> ActivateActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertConditionsActionTextData InsertActivateActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleDirectingConditionTargetType, FKoratDramaticDirectionItemListElement> TargetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertTargetTextData InsertTargetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBattleDirectingBuffDataList, FKoratDramaticDirectionItemListElement> BuffText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertBuffTextData InsertBuffText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAiTypeDataList, FKoratDramaticDirectionItemListElement> AiText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertAiTypeTextData InsertAiText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FKoratDramaticDirectionItemListElement> ZItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoraDramaticInsertZItemTextData InsertZItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> OpeningTransitionLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDramaticBattleCommonDataAsset* CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OficialExtraBattleUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> SimpleEditCharacterSelectList;
    
public:
    UKoratDramaticBattleDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void SortZItemText();
    
    UFUNCTION(BlueprintCallable)
    void SortTriggerData();
    
    UFUNCTION(BlueprintCallable)
    void SortTargetData();
    
    UFUNCTION(BlueprintCallable)
    void SortDirectionData();
    
    UFUNCTION(BlueprintCallable)
    void SortConditionsActionData();
    
    UFUNCTION(BlueprintCallable)
    void SortCharacterStateData();
    
    UFUNCTION(BlueprintCallable)
    void SortBuffData();
    
    UFUNCTION(BlueprintCallable)
    void SortAtackTypeData();
    
    UFUNCTION(BlueprintCallable)
    void SortAiData();
    
    UFUNCTION(BlueprintCallable)
    void SortActivateActionData();
    
    UFUNCTION(BlueprintCallable)
    void InsertZItemData();
    
    UFUNCTION(BlueprintCallable)
    void InsertTriggerData();
    
    UFUNCTION(BlueprintCallable)
    void InsertTargetData();
    
    UFUNCTION(BlueprintCallable)
    void InsertDirectionData();
    
    UFUNCTION(BlueprintCallable)
    void InsertConditionsActionData();
    
    UFUNCTION(BlueprintCallable)
    void InsertCharacterStateData();
    
    UFUNCTION(BlueprintCallable)
    void InsertBuffData();
    
    UFUNCTION(BlueprintCallable)
    void InsertAtackTypeData();
    
    UFUNCTION(BlueprintCallable)
    void InsertAiData();
    
    UFUNCTION(BlueprintCallable)
    void InsertActivateActionData();
    
};

