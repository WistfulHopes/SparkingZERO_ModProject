#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMovieMode.h"
#include "FullScreenMovieActor.generated.h"

UCLASS(Blueprintable)
class AFullScreenMovieActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 ManaSourceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EMovieMode MovieMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieMode MovieModeBackup;
    
public:
    AFullScreenMovieActor(const FObjectInitializer& ObjectInitializer);

};

