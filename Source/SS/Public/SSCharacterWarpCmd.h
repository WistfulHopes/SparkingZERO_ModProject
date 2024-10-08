#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ECharacterWarpAfterDirectionType.h"
#include "ECharacterWarpIndependRequestType.h"
#include "ECharacterWarpLinkType.h"
#include "ECharacterWarpResultAttachTimingType.h"
#include "KoratActionDataList.h"
#include "SSCharacterWarpCommandInfo.h"
#include "SSCharacterWarpCmd.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class ASSCharacterWarpCmd : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSCharacterWarpCommandInfo CommandInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName LocatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform CannonTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsSavePreWarpTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsKeepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsKeepDirectionFinishPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsHardSetSavedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpLinkType LinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpAfterDirectionType AfterDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpResultAttachTimingType AttachTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECharacterWarpIndependRequestType IndependRequest;
    
    ASSCharacterWarpCmd(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLinkType(ECharacterWarpLinkType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSavePreWarpTransform(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsKeepDistance(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsKeepDirectionFinishPose(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHardSetSavedPoint(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIndependRequest(ECharacterWarpIndependRequestType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachTiming(ECharacterWarpResultAttachTimingType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterDirectionType(ECharacterWarpAfterDirectionType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAction(FKoratActionDataList Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostWarped();
    
    UFUNCTION(BlueprintCallable)
    bool HasEffectiveTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* GetTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetActor();
    
    UFUNCTION(BlueprintCallable)
    ASSCharacter* GetOwnerCharacter();
    
    UFUNCTION(BlueprintCallable)
    ECharacterWarpLinkType GetLinkType();
    
    UFUNCTION(BlueprintCallable)
    ECharacterWarpIndependRequestType GetIndependRequestType();
    
    UFUNCTION(BlueprintCallable)
    ECharacterWarpResultAttachTimingType GetAttachTimingType();
    
    UFUNCTION(BlueprintCallable)
    ECharacterWarpAfterDirectionType GetAfterDirectionType();
    
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList GetActiveAction();
    
};

