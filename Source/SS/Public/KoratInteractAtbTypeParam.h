#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractAtbTypeParam.generated.h"

UCLASS(Blueprintable)
class UKoratInteractAtbTypeParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList AtbTypeData;
    
    UKoratInteractAtbTypeParam();

};

