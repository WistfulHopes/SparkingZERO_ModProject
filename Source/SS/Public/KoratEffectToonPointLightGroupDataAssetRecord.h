#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectToonPointLightDataType.h"
#include "EKoratEffectToonPointLightGroupType.h"
#include "EKoratEffectToonPointLightTargetType.h"
#include "KoratEffectToonPointLightGroupDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectToonPointLightGroupDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratEffectToonPointLightGroupType GroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MatchingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MatchingFolderNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratEffectToonPointLightTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratEffectToonPointLightDataType DataType;
    
    SS_API FKoratEffectToonPointLightGroupDataAssetRecord();
};

