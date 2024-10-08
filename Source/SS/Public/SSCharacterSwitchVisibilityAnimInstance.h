#pragma once
#include "CoreMinimal.h"
#include "KoratSwitchVisibilityMeshComponents.h"
#include "SSAnimInstance.h"
#include "SSCharacterSwitchVisibilityAnimInstance.generated.h"

class UKoratViewSwitchDataAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class USSCharacterSwitchVisibilityAnimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKoratViewSwitchDataAsset*> ViewSwitchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSwitchVisibilityMeshComponents> MeshGroup;
    
public:
    USSCharacterSwitchVisibilityAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveViewSwitchShadow(USkeletalMeshComponent* Mesh, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveViewSwitchMesh(USkeletalMeshComponent* Mesh, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisibilityValueFromAsset(UKoratViewSwitchDataAsset* ViewSwitch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetVisibilityValue(const FName& Name) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetFaceMeshIndex() const;
    
};

