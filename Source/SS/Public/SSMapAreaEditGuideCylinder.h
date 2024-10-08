#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EMapAreaEditType.h"
#include "EMapAreaSizeType.h"
#include "SSMapAreaEditGuideCylinder.generated.h"

UCLASS(Blueprintable)
class ASSMapAreaEditGuideCylinder : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 uniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EMapAreaEditType EditType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOutOfArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsAreaDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EMapAreaSizeType SizeType;
    
    ASSMapAreaEditGuideCylinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEditType(EMapAreaEditType Type);
    
    UFUNCTION(BlueprintCallable)
    EMapAreaEditType GetEditType();
    
};

