#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "StreamManaMovie.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UStreamManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamUrl;
    
    UStreamManaMovie();

};

