#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratTeamTalkDataAsset.generated.h"

class USSTeamTalkDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratTeamTalkDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTeamTalkDataAsset*> PtrRecords;
    
public:
    UKoratTeamTalkDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(const FName& InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateIdToAssets();
    
};

