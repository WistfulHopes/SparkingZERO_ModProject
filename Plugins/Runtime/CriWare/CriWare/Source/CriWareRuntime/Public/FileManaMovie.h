#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "FileManaMovie.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UFileManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrecacheFile;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
public:
    UFileManaMovie();

    UFUNCTION(BlueprintCallable)
    void SetFilePath(const FString& Path);
    
};

