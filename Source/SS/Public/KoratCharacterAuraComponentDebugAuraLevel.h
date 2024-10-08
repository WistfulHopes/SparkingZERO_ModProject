#pragma once
#include "CoreMinimal.h"
#include "KoratAuraTransformOffset.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratCharacterAuraComponentDebugAuraLevel.generated.h"

class AKoratFreeTimelineActor;
class USSAuraAssignDataAsset;
class USSAuraDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterAuraComponentDebugAuraLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AuraLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AKoratFreeTimelineActor> FreeTimelineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSAuraDataAsset> AuraDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSAuraAssignDataAsset> AuraAssignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail EffectColorDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraTransformOffset TransformOffset;
    
    SS_API FKoratCharacterAuraComponentDebugAuraLevel();
};

