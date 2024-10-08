#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterBoneDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterBoneDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    SS_API FKoratCharacterBoneDataAssetRecord();
};

