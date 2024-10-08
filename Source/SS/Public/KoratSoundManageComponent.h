#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EKoratPatternBGMName.h"
#include "EKoratVibrationControllerType.h"
#include "ESSSoundGroupType.h"
#include "KoratSoundHandle.h"
#include "KoratSoundManageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SS_API UKoratSoundManageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UKoratSoundManageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayOnAisac(int32 InSoundId, const FString& InSoundName, ESSSoundGroupType InSoundType, bool bInUseGeneralSheet, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsVibration, const FString& InSelectorName, const FString& InLabelName, const bool IsEnableSlowPlaySpeed, const TMap<FString, float>& InAisacInfomation, const EKoratVibrationControllerType InControllerVibrationType);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayEventCharaVoiceByID(const int32 InSoundId, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsLipSync);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayEventCharaVoice(const FString& InSoundName, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsLipSync);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayCharaBGM(const EKoratPatternBGMName InPatternBGMName, const float InFadeInTime, const float InFadeOutTime, const bool InCrossFade, const bool InInsertBGM);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle Play(int32 InSoundId, ESSSoundGroupType InSoundType, bool bInUseGeneralSheet, float InVolume, const FName& InAttachLocationName, const FVector& InAttachLocation, bool IsVibration, const FString& InSelectorName, const FString& InLabelName, const bool IsEnableSlowPlaySpeed);
    
};

