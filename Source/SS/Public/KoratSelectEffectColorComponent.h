#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKoratCharacterEffectOutlineColorType.h"
#include "KoratBuffFormTypeDataList.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratEffectMultipleColorInterface.h"
#include "KoratSelectEffectColorComponent.generated.h"

class ASSCharacter;
class UParticleSystem;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratSelectEffectColorComponent : public UActorComponent, public IKoratEffectMultipleColorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail ColorDataDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterEffectColorSetDataTypeDataList> ColorTypeDataListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* ColorSourceByCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData CurrentCacheColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* ChangeColorCharacter;
    
public:
    UKoratSelectEffectColorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetSourceColor(const FKoratEffectColorDataDetail& InSourceColorData);
    
    UFUNCTION(BlueprintCallable)
    void SetColorTypeIndex(const EKoratCharacterEffectOutlineColorType InIndex, const FKoratCharacterEffectColorSetDataTypeDataList& InNewType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColorSourceByCharacter(const ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnChanedBuffForm(const FKoratBuffFormTypeDataList& InPreForm, const FKoratBuffFormTypeDataList& InNewForm);
    
    UFUNCTION(BlueprintCallable)
    FKoratEffectColorDataDetail GetSourceColor();
    
    UFUNCTION(BlueprintCallable)
    bool GetParticle(const FString& InParticleName, UParticleSystem*& OutParticle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterEffectColorSetDataTypeDataList GetColorType(const int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetColorFromIndex(const int32 InIndex, FKoratCharacterEffectColorSetData& OutColor, const bool InNotFoundReturnDefualt);
    
    UFUNCTION(BlueprintCallable)
    bool GetColor(FKoratCharacterEffectColorSetData& OutColor, const bool InNotFoundReturnDefualt);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateColor();
    
    UFUNCTION(BlueprintCallable)
    bool EnableUpdateApply();
    

    // Fix for true pure virtual functions not being implemented
};

