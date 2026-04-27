#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "KoratExFacialInformation.h"
#include "KoratFacialInformation.h"
#include "KoratRigUnit_SetFicialExpression.generated.h"

USTRUCT(BlueprintType)
struct FKoratRigUnit_SetFicialExpression : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()

public:
    // Must be USTRUCTs, not UCLASS
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<FKoratFacialInformation> FacialInformations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<FKoratExFacialInformation> ExFacialInformations;

    // Float, not double
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    float OpenVertical;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    float CloseVertical;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    float DefaultVerticalAlpha;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    int32 AnalyzerStatus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    bool IsPlaying;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    bool IsMaxOpen;

    // Arrays of float
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<float> ControlValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<float> EyeCurveValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<float> OpenCurveValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<float> CloseCurveValue;

    // Array of struct
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(Input))
    TArray<FCachedRigElement> CachedControlIndex;

    SS_API FKoratRigUnit_SetFicialExpression();

    RIGVM_METHOD()
    virtual void Execute(const FRigUnitContext& Context) override;
};


