#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "MutualDataAsset.h"
#include "SSReplaceCorrectCharacterItemDataAsset.generated.h"

UCLASS(Blueprintable)
class USSReplaceCorrectCharacterItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FKoratCharacterItemDataList> ReplaceRecords;
    
    USSReplaceCorrectCharacterItemDataAsset();

};

