#pragma once
#include "CoreMinimal.h"
#include "KoratNiagaraSettingComponent.h"
#include "KoratNiagaraCutImageComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratNiagaraCutImageComponent : public UKoratNiagaraSettingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UKoratNiagaraCutImageComponent(const FObjectInitializer& ObjectInitializer);

};

