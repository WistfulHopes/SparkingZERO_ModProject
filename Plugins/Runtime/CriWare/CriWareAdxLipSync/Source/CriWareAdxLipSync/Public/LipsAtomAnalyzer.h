#pragma once
#include "CoreMinimal.h"
#include "ELipsAtomAnalyzerProcessStatus.h"
#include "ELipsAtomAnalyzerReadoutStatus.h"
#include "LipsAnalyzerBase.h"
#include "LipsAtomAnalyzer.generated.h"

class UAtomComponent;

UCLASS(Blueprintable)
class CRIWAREADXLIPSYNC_API ULipsAtomAnalyzer : public ULipsAnalyzerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
public:
    ULipsAtomAnalyzer();

    UFUNCTION(BlueprintCallable)
    bool IsAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELipsAtomAnalyzerReadoutStatus GetReadoutStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELipsAtomAnalyzerProcessStatus GetProcessStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void Detach();
    
    UFUNCTION(BlueprintCallable)
    void Attach(UAtomComponent* InAtomComponent);
    
};

