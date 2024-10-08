#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratActionDataList.h"
#include "KoratFreeTimelineAssetGetter.h"
#include "KoratFreeTimelineTypeDataList.h"
#include "KoratFreeTimelineBranchAssetGetter.generated.h"

class UKoratCharacterIdGetter;

UCLASS(Blueprintable, EditInlineNew)
class UKoratFreeTimelineBranchAssetGetter : public UKoratFreeTimelineAssetGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineTypeDataList FreeTimelineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterIdGetter* CharacterIdGetter;
    
public:
    UKoratFreeTimelineBranchAssetGetter();

};

