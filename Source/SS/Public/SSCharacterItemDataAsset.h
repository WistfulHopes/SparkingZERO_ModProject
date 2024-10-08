#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockType.h"
#include "ESSCharacterItemCategory.h"
#include "ESSCharacterItemEquipCharacterCondition.h"
#include "ESSCharacterItemTagTextType.h"
#include "ESSCharacterItemType.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSCharacterItemDataAsset.generated.h"

class USSCharacterItemEffectDataAsset;
class UTexture2D;

UCLASS(Blueprintable)
class USSCharacterItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockType UnLockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSCharacterItemTagTextType> NameTextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSCharacterItemTagTextType> ItemInfoTextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCharacterItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCharacterItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateModeOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeveloperOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCharacterItemEquipCharacterCondition EquipCharacterCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> EquipConditionCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceTakeOverAtTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckEquipCharacterConditionAtTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAtPassingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSCharacterItemEffectDataAsset*> EffectAssets;
    
    USSCharacterItemDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTagTexts(TArray<FText>& OutTagTexts, const TArray<ESSCharacterItemTagTextType>& InTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTagText(ESSCharacterItemTagTextType InTagType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInfoText() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateEffectAssets();
    
};

