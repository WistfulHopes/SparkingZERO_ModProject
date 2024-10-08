#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SSDragonAdventureIFChartSelecter.h"
#include "SSDragonAdventureIFChartSelecterByPad.generated.h"

UCLASS(Blueprintable)
class ASSDragonAdventureIFChartSelecterByPad : public ASSDragonAdventureIFChartSelecter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> EventDetailsKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MoveUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MoveDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MoveLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MoveRightKeys;
    
public:
    ASSDragonAdventureIFChartSelecterByPad(const FObjectInitializer& ObjectInitializer);

};

