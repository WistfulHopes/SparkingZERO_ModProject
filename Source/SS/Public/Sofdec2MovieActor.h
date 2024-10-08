#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESofdec2MovieMode.h"
#include "Sofdec2MovieActor.generated.h"

UCLASS(Blueprintable)
class SS_API ASofdec2MovieActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 ManaSourceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESofdec2MovieMode MovieMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESofdec2MovieMode MovieModeBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableLoop;
    
public:
    ASofdec2MovieActor(const FObjectInitializer& ObjectInitializer);

};

