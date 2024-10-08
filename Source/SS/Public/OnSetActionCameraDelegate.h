#pragma once
#include "CoreMinimal.h"
#include "ESSSetActionCameraType.h"
#include "SSActionCameraParameterData.h"
#include "OnSetActionCameraDelegate.generated.h"

class ASSCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSetActionCamera, ASSCharacter*, InCharacter, ESSSetActionCameraType, InSetType, const FSSActionCameraParameterData&, InActionCameraParameter);

