#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratMapAttributeDataList.h"
#include "SSCharacterMapAttribute.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSCharacterMapAttribute : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> Run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> Dash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> DashJet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> Landed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> StrongStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> WeakStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> StrongStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> RadialJetSmoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> MapCollide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> SphereSmoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ChargeAirPressureLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> BulletDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> BeamDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> JetDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> JetSmokeFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> JetSmokeBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> JetSmokeNozzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> GroundDustChargeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> GroundDustChargeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ChargingDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> DomeExplosionDebrisMidium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> DomeExplosionDebrisStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ChargingDust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ChargeAirPressureInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> PWStaticelectricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> HoistingRubbleS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> HoistingRubbleL;
    
    USSCharacterMapAttribute();

};

