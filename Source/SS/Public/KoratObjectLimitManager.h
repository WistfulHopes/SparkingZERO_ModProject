#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KoratMapDataList.h"
#include "KoratObjectLimitDataList.h"
#include "KoratOrientedBox.h"
#include "KoratObjectLimitManager.generated.h"

class UKoratObjectLimitGroupInfo;
class UKoratObjectLimitManager;
class ULevelSequence;
class UObject;

UCLASS(Blueprintable)
class SS_API UKoratObjectLimitManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratObjectLimitDataList, UKoratObjectLimitGroupInfo*> Groups;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> ReservedObjects;
    
public:
    UKoratObjectLimitManager();

    UFUNCTION(BlueprintCallable)
    static bool ValidateContinuouslyRespawnOffOfClass(ULevelSequence* LevelSequence, const FGuid& BindingId, const UClass* ClassObject, FString& OutText);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void ResetLimit();
    
    UFUNCTION(BlueprintCallable)
    void RegisterObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteLimit(const FKoratMapDataList& MapDataList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseAbleObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegistered(UObject* Object) const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverlaping(UObject* One, UObject* Another);
    
    UFUNCTION(BlueprintCallable)
    static UKoratObjectLimitManager* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void ClearObjects();
    
    UFUNCTION(BlueprintCallable)
    static FKoratOrientedBox BuildOrientedBox(const FTransform& ToWorldTransform, const FVector& BoxExtent);
    
};

