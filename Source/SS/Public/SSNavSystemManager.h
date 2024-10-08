#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SSNavSystemManager.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class ASSNavSystemManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> UseFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawPath: 1;
    
    ASSNavSystemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestPathfinding();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugCommand(const TArray<FString>& InDebugCommand);
    
    UFUNCTION(BlueprintCallable)
    bool LineTraceMulti(FVector& OutLocation, const FVector& InStart, const FVector& InGoal, const bool InPush);
    
    UFUNCTION(BlueprintCallable)
    bool IsLineTraceDestructible(const FVector& InStart, const FVector& InGoal);
    
    UFUNCTION(BlueprintCallable)
    void ExecutePathfinding(TArray<FVector>& OutPathResult, const FVector& InStart, const FVector& InGoal);
    
    UFUNCTION(BlueprintCallable)
    void DrawPath(const TArray<FVector>& InPathArray, const FColor InColor);
    
    UFUNCTION(BlueprintCallable)
    bool DoesNavDataExist();
    
    UFUNCTION(BlueprintCallable)
    void CheckPad();
    
};

