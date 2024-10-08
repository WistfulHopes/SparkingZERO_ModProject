#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratCharacterDataList.h"
#include "MenuCharacterParameter.h"
#include "SSMenuCharacterManager.generated.h"

class ASSCharacter;
class ASSMenuCharacter;

UCLASS(Blueprintable)
class ASSMenuCharacterManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, ASSMenuCharacter*> CharacterList;
    
public:
    ASSMenuCharacterManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASSCharacter* SpawnCharacter(int32 InMenuCharacterID);
    
    UFUNCTION(BlueprintCallable)
    bool LoadCharacter(int32 InMenuCharacterID);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidCharacterID(int32 InMenuCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterSpawned(int32 InMenuCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterLoading(int32 InMenuCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterLoaded(int32 InMenuCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetCharacterSSCharacter(int32 InMenuCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSMenuCharacter* GetCharacter(int32 InMenuCharacterID) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharacter(int32 InMenuCharacterID, bool InIsRequestGC);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateCharacter(const FKoratCharacterDataList& InCharacterDataList, const FMenuCharacterParameter& InParameter);
    
};

