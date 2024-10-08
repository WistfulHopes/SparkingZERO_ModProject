#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SSMpcPriorityInfo.h"
#include "SSMpcPriorityActorBase.generated.h"

UCLASS(Blueprintable)
class ASSMpcPriorityActorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMpcPriorityInfo PriorityInfo;
    
public:
    ASSMpcPriorityActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInfoVectorValue(const FLinearColor InVectorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInfoUpdateFlag(const bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInfoScalarValue(const float InScalarValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInfoPriority(const int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPriorityInfo(const FSSMpcPriorityInfo& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPriorityManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSMpcPriorityInfo GetPriorityInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSelfToManager();
    
};

