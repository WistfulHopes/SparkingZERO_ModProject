#pragma once
#include "CoreMinimal.h"
#include "KoratEffectInteractNiagaraTypeDataList.h"
#include "KoratInteractNiagaraDataRecord.generated.h"

class UKoratInteractAtbBranchDataAsset;
class UNiagaraSystem;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FKoratInteractNiagaraDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractNiagaraTypeDataList NiagaraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbBranchDataAsset* BranchDataList;
    
    SS_API FKoratInteractNiagaraDataRecord();
};

