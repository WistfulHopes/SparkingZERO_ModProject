#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleAuraType.h"
#include "MutualDataAsset.h"
#include "KoratSearchCompatibleDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSearchCompatibleDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleAuraType> NoneSearchableAuraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleAuraType> AuraSearchableAuraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleAuraType> ScouterSearchableAuraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleAuraType> CyborgSearchableAuraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleAuraType> GodSearchableAuraType;
    
    UKoratSearchCompatibleDataAsset();

};

