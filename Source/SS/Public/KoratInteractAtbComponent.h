#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractAtbComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratInteractAtbComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList AtbData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrefixName;
    
public:
    UKoratInteractAtbComponent(const FObjectInitializer& ObjectInitializer);

};

