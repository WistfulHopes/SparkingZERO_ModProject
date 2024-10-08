#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratCharacterDataList.h"
#include "MenuCharacterParameter.h"
#include "SSMenuCharacter.generated.h"

class ASSCharacter;
class USSUICharacterReader;

UCLASS(Blueprintable)
class ASSMenuCharacter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSUICharacterReader* CharacterReader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMenuCharacterParameter CharacterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* SSCharacter;
    
public:
    ASSMenuCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASSCharacter* Spawn();
    
    UFUNCTION(BlueprintCallable)
    bool Load();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetSSCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMenuCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterDataList GetCharacterDataList() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharacter();
    
};

