#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAiEnabledType.h"
#include "KoratAiTypeDataList.h"
#include "OnResetThinkingDelegate.h"
#include "SSAiCharacterStatusComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiCharacterStatusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetThinking OnResetThinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAiEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAiPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AiLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList AiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiEnabledType DebugAiEnabledType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAiDisabledToWaitEventEnd;
    
public:
    USSAiCharacterStatusComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDebugAiEnabledType(const EAiEnabledType InAiEnabledType);
    
    UFUNCTION(BlueprintCallable)
    void SetAiType(const FKoratAiTypeDataList& InTypeDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetAiPause(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAiLevel(const int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAiEnable(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAiDisabledToWaitEventEnd(const bool bDisable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPureBattleStartNoClear();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeToNewCharacter(ASSCharacter* InBefore, ASSCharacter* InAfter, const bool bInNewCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiDisabledToWaitEventEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAiEnabledType GetDebugAiEnabledType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratAiTypeDataList GetAiType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAiLevel() const;
    
};

