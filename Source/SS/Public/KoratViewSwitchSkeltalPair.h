#pragma once
#include "CoreMinimal.h"
#include "KoratViewSwitchSkeltalPair.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratViewSwitchSkeltalPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShadowTag;
    
    FKoratViewSwitchSkeltalPair();
};

