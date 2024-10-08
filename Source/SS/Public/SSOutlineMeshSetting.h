#pragma once
#include "CoreMinimal.h"
#include "SSOutlineMeshSetting.generated.h"

USTRUCT(BlueprintType)
struct FSSOutlineMeshSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutlineMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecievePointLightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceiveShell;
    
    SS_API FSSOutlineMeshSetting();
};

