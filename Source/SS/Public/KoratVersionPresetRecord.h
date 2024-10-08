#pragma once
#include "CoreMinimal.h"
#include "EVersionID.h"
#include "KoratVersionPresetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratVersionPresetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EVersionID> VersionSet;
    
    SS_API FKoratVersionPresetRecord();
};

