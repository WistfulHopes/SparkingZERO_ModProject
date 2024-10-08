#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "KoratInteractAttributeData.h"
#include "KoratFreeTimelineAssetGetter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKoratFreeTimelineAssetGetter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssetPathByProgram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LoadedDefaultAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAttributeData EffectInteractData;
    
public:
    UKoratFreeTimelineAssetGetter();

    UFUNCTION(BlueprintCallable)
    void SetInteractAttributeData(const FKoratInteractAttributeData& InInteractAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool SetAssetSoftObjectPath(const FSoftObjectPath InSoftObjectAssetPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratInteractAttributeData GetInteractAttributeData() const;
    
};

