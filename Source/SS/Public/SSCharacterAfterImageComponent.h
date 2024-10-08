#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSCharacterAfterImageStruct.h"
#include "Templates/SubclassOf.h"
#include "SSCharacterAfterImageComponent.generated.h"

class ASSCharacterAfterImageCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterAfterImageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterAfterImageStruct CharacterAfterImageStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSCharacterAfterImageCharacter> SpawnClassType;
    
    USSCharacterAfterImageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnAfterImageMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OneShot();
    
    UFUNCTION(BlueprintCallable)
    void IsSpawnAfterImage(bool& bResult);
    
    UFUNCTION(BlueprintCallable)
    void CalculationDelayTime(float& DelayTime);
    
};

