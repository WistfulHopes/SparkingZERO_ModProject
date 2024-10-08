#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "EKoratSocketType.h"
#include "KoratAnimMetaDataSocketName.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UKoratAnimMetaDataSocketName : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSocketType SocketType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SocketName;
    
    UKoratAnimMetaDataSocketName();

};

