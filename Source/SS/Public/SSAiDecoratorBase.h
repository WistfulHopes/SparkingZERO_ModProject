#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "KoratMapDataList.h"
#include "SSAiDecoratorBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class USSAiDecoratorBase : public UBTDecorator_BlueprintBase {
    GENERATED_BODY()
public:
    USSAiDecoratorBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsEmotionParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 OnGetProbability(AActor* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FKoratMapDataList> OnGetMapIds();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 OnGetItemNum();
    
};

