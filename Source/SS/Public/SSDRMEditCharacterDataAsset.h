#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditActionDataList.h"
#include "KoratDRMEditCameraDataList.h"
#include "KoratDRMEditFacialDataList.h"
#include "KoratDRMEditSituationDataList.h"
#include "MutualDataAsset.h"
#include "SSDRMEditCharacterUniqueAction.h"
#include "SSDRMEditUniqueTimeDilation.h"
#include "SSDRMEditCharacterDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDRMEditCharacterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditActionDataList, FSSDRMEditCharacterUniqueAction> UniqueActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditActionDataList, TSoftObjectPtr<ULevelSequence>> UniqueActionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditCameraDataList, TSoftObjectPtr<ULevelSequence>> UniqueCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditFacialDataList, TSoftObjectPtr<ULevelSequence>> UniqueFacials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditSituationDataList, TSoftObjectPtr<ULevelSequence>> UniqueSituations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditCameraDataList, FSSDRMEditUniqueTimeDilation> UniqueTimeDilations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditActionDataList, FKoratDRMEditActionDataList> ReplaceActions;
    
public:
    USSDRMEditCharacterDataAsset();

};

