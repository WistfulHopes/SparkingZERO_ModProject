#pragma once
#include "CoreMinimal.h"
#include "EKoratOperationGuideCategoryIcon.h"
#include "KoratBlastGroupOperationData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlastGroupOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text_Ctrl_Tips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text_Category_Tips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratOperationGuideCategoryIcon> Text_Category_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_S_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_S_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_S_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_S_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_M_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_M_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WBP_OBJ_SL_Cell_XL;
    
    SS_API FKoratBlastGroupOperationData();
};

