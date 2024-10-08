#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratCharacterCommonParameter.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "MutualDataAsset.h"
#include "KoratCharacterDataAsset.generated.h"

class USSCharacterDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCommonParameter CommonParameter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList IdleActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList DragonDashActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ZBurstDashActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ChargeActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList SparkingChargeActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList FormChangeActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList FormChangeInActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList FormChangeOutActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList EnergyBulletActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList EnergyBulletSmashActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ThrowActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastForte1ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastForte2ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastSkill1ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastSkill2ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastUltimateActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastImpactActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastImpactFireActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastImpactPhaseActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastImpactWinActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> BlastImpactLostActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> SpeedImpuctDamageActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> RushBulletGuardableActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ExplosionHitZoomOutLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ExplosionHitZoomOutLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ExplosionHitZoomOutLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ExplosionHitZoomInLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ExplosionHitZoomInLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ExplosionHitZoomInLv3;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSCharacterDataAsset*> PtrRecords;
    
public:
    UKoratCharacterDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetEffectHighSpeedMoveData();
    
    UFUNCTION(BlueprintCallable)
    void SetDesignatedDataList();
    
    UFUNCTION(BlueprintCallable)
    void SetChangeCharacterActionData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNameArray(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultItemsAndCostume(const FKoratCharacterDataList& InCharacter, TArray<FKoratCharacterItemDataList>& OutItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultItems(const FKoratCharacterDataList& InCharacter, TArray<FKoratCharacterItemDataList>& OutItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultCostume(const FKoratCharacterDataList& InCharacter, FKoratCharacterCostumeDataList& OutCostume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharacterDataList> GetDebugAllCharacterDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterTitletName(const FName& InCharacterKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterShortName(const FName& InCharacterKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterFullName(const FName& InCharacterKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterEventName(const FName& InCharacterKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckThrowAction(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSmashBulletAction(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRushBulletAction(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlastAction(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable)
    void Check();
    
    UFUNCTION(BlueprintCallable)
    void AutoGenerateDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void AutoGenerateCostumeAndModelNames();
    
};

