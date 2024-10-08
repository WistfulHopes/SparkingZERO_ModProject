#pragma once
#include "CoreMinimal.h"
#include "KoratLipsAnalyzerInformation.generated.h"

class ASSCharacter;
class ULipsAtomAnalyzer;

USTRUCT(BlueprintType)
struct FKoratLipsAnalyzerInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULipsAtomAnalyzer* Analyzer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* AttachedCharacter;
    
    SS_API FKoratLipsAnalyzerInformation();
};

