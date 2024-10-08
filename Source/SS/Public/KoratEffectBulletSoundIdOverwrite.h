#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletSoundIdOverwrite.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletSoundIdOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundId;
    
    SS_API FKoratEffectBulletSoundIdOverwrite();
};

