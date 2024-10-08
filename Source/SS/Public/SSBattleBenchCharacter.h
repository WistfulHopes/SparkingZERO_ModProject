#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratPlayerStartDataList.h"
#include "SSBattleBenchCharacter.generated.h"

class USSCharacterItemEquipment;
class USSCharacterNumericManager;

UCLASS(Blueprintable)
class ASSBattleBenchCharacter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList CharacterKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MemberNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* ItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterNumericManager* NumericManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealedLife;
    
public:
    ASSBattleBenchCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnBattleStart();
    
};

