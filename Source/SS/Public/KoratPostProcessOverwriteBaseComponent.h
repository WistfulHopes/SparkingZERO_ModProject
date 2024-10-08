#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratPostProcessOverwriteBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratPostProcessOverwriteBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BaseParameterNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OverrideParameterNameList;
    
public:
    UKoratPostProcessOverwriteBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool CheckValidPropertyList(TArray<FString>& InCheckList);
    
};

