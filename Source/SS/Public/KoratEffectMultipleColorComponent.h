#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratCharacterEffectColorReplaceTypeDataList.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratEffectMultipleColorInterface.h"
#include "KoratEffectMultipleColorComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratEffectMultipleColorComponent : public UActorComponent, public IKoratEffectMultipleColorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail ColorDataDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList ColorTypeDataList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> ColorSourceByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData CurrentCacheColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterEffectColorReplaceTypeDataList> CurrentReplaceSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideColorSourceFlag;
    
public:
    UKoratEffectMultipleColorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetSourceColor(const FKoratEffectColorDataDetail& InSourceColorData);
    
    UFUNCTION(BlueprintCallable)
    void SetReplaceTypeFormSequencer(const int32 InIndex, const FKoratCharacterEffectColorReplaceTypeDataList& InNewReplaceType);
    
    UFUNCTION(BlueprintCallable)
    FKoratEffectColorDataDetail GetSourceColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterEffectColorSetDataTypeDataList GetColorType() const;
    

    // Fix for true pure virtual functions not being implemented
};

