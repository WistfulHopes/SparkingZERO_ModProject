#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSEffectHighSpeedMoveParts.h"
#include "Templates/SubclassOf.h"
#include "SSEffectHighSpeedMoveComponent.generated.h"

class ASSEffectHighSpeedMoveActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSEffectHighSpeedMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Neck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts WAIST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Spine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Spine3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts THGH_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts THGH_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts socket_THIGH_L_Aura_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts socket_THIGH_R_Aura_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts CLANK_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts CLANK_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts CLANKROLL_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts CLANKROLL_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts TOE1_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts TOE1_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts SHOULDER_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts SHOULDER_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts ELBOW_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts ELBOW_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts ELBOWROLL_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts ELBOWROLL_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts F_MIDDLE1_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts F_MIDDLE1_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail13;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSEffectHighSpeedMoveParts Tail18;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSEffectHighSpeedMoveActor> SpawnClassType;
    
    USSEffectHighSpeedMoveComponent(const FObjectInitializer& ObjectInitializer);

};

