#pragma once
#include "CoreMinimal.h"
#include "SSSingletonAssetKeyData.h"
#include "SSSingletonAssetIndexMember.generated.h"

USTRUCT(BlueprintType)
struct FSSSingletonAssetIndexMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MetaDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSingletonAssetKeyData> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OuterRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AssetNames;
    
    SS_API FSSSingletonAssetIndexMember();
};

