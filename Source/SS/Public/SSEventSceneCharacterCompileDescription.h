#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "SSEventSceneCharacterCompileDescription.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCharacterCompileDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> Items;
    
    SS_API FSSEventSceneCharacterCompileDescription();
};

