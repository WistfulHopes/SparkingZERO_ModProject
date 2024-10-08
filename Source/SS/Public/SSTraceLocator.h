#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "SSTraceLocator.generated.h"

UCLASS(Blueprintable)
class ASSTraceLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEditorTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocatorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> TraceCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastTraceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitObjectName;
    
    ASSTraceLocator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TraceTest(FHitResult& OutHitResult, FVector& OutStartPos, FVector& OutEndPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditorTick(float DeltaTime);
    
};

