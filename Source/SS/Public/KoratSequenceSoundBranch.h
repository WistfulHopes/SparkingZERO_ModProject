#pragma once
#include "CoreMinimal.h"
#include "EKoratSequenceSoundSheetType.h"
#include "KoratSequenceSoundBranch.generated.h"

USTRUCT(BlueprintType)
struct FKoratSequenceSoundBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSequenceSoundSheetType SheetType;
    
    SS_API FKoratSequenceSoundBranch();
};

