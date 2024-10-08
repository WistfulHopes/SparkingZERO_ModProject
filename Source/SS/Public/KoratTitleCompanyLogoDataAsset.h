#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratTitleCompanyLogoDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratTitleCompanyLogoDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSaveDialogDispSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaveLoadDialogDispSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCCheckDialogDispSec;
    
public:
    UKoratTitleCompanyLogoDataAsset();

};

