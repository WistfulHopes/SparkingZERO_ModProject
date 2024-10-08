#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AtomCueInfo.h"
#include "SoundAtomCueSheet.generated.h"

class UDataTable;
class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API USoundAtomCueSheet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Contains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcbFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueSheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAwbDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath AwbDirectory;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AdditionalData;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomCueInfo> CueInfos;
    
public:
    USoundAtomCueSheet();

    UFUNCTION(BlueprintCallable)
    static void ReleaseAcb(FName AcbName);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCueSheet* LoadAtomCueSheet(USoundAtomCueSheet* CueSheet, bool bAddToLevel);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCueSheet* LoadAcb(FName AcbName, bool bAddToLevel);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCues() const;
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueByName(const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueByIndex(int32 CueIndex);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueById(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_GetCueInfoFromName(const FString& Name, UPARAM(Ref) FAtomCueInfo& CueInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_GetCueInfoFromIndex(int32 Index, UPARAM(Ref) FAtomCueInfo& CueInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_GetCueInfoFromId(int32 ID, UPARAM(Ref) FAtomCueInfo& CueInfo) const;
    
    UFUNCTION(BlueprintCallable)
    static void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

