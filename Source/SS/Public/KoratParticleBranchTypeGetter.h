#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratFreeTimelineTypeDataList.h"
#include "KoratParticleBranchTypeGetter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKoratParticleBranchTypeGetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineTypeDataList DefaultValue;
    
    UKoratParticleBranchTypeGetter();

};

