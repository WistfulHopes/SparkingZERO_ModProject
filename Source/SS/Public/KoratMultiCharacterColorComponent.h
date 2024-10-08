#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratMultiCharacterColorComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratMultiCharacterColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* UseCharacter01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* UseCharacter02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ASSCharacter*> CharacterMap;
    
    UKoratMultiCharacterColorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseCharacter02(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCharacter01(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCharacter(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharacter(ASSCharacter* InCharacter);
    
};

