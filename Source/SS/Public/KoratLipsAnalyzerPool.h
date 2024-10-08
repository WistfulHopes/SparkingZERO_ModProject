#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratLipsAnalyzerInformation.h"
#include "KoratLipsAnalyzerPool.generated.h"

UCLASS(Blueprintable)
class UKoratLipsAnalyzerPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratLipsAnalyzerInformation LipsAnalyzer;
    
public:
    UKoratLipsAnalyzerPool();

};

