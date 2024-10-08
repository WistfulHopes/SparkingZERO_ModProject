#pragma once
#include "CoreMinimal.h"
#include "KoratEffectInteractNiagaraTypeDataList.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratNiagaraSettingComponent.h"
#include "KoratNiagaraMaterialComponent.generated.h"

class UMaterialInterface;
class UNiagaraSystem;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratNiagaraMaterialComponent : public UKoratNiagaraSettingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideMateralValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList AttributeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractNiagaraTypeDataList TypeNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TemplateSyatem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* UseSkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> SettingListMap;
    
public:
    UKoratNiagaraMaterialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetupNiagaraSystem();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialInstance(UMaterialInterface* InMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetEnumTypeNiagara(const FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectInteractNiagaraType(const FKoratEffectInteractNiagaraTypeDataList& InDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectInteractAttribute(const FKoratInteractAtbTypeDataList& InAttrDataList);
    
    UFUNCTION(BlueprintCallable)
    bool AddParameterNameAndMaterial(const FName& InName, UMaterialInterface* InMaterial);
    
};

