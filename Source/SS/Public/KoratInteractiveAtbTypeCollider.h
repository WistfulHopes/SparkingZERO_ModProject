#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractiveAtbTypeGetter.h"
#include "KoratInteractiveAtbTypeCollider.generated.h"

class UShapeComponent;

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractiveAtbTypeCollider : public UKoratInteractiveAtbTypeGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* Collider;
    
    UKoratInteractiveAtbTypeCollider();

    UFUNCTION(BlueprintCallable)
    FKoratInteractAtbTypeDataList GetParameter(const int32 InUniqueId);
    
};

