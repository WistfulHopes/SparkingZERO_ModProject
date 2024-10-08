#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "PlatformManaMovie.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UPlatformManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaMovie* ManaMovie;
    
public:
    UPlatformManaMovie();

};

