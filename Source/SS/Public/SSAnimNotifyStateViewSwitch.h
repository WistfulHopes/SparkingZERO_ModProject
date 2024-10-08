#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotifyState.h"
#include "SSAnimNotifyStateViewSwitch.generated.h"

class USSCharacterSwitchVisibilityAnimInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyStateViewSwitch : public USSAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, USSCharacterSwitchVisibilityAnimInstance*> TargetInstance;
    
public:
    USSAnimNotifyStateViewSwitch();

};

