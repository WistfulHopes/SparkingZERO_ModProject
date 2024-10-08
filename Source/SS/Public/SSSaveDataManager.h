#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKoratMainGameSaveMode.h"
#include "SSOptionParam.h"
#include "SSSaveDataManager.generated.h"

class USSDramaticEditImageSaveData;
class USSGameInstance;
class USSMainGameSaveData;
class USSMenuGeneralDialog;
class USSSystemSaveData;

UCLASS(Blueprintable)
class SS_API USSSaveDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSSystemSaveData* SystemSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMainGameSaveData* MainGameSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> DramaticEditImageSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DramaticEditImageSaveDataSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DramaticEditImageSaveDataCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SystemSaveDataFileChk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MainGameSaveDataFileChk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SystemSaveDataLoadEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MainGameSaveDataLoadEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemSaveDataLoadReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainGameSaveDataLoadReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemSaveDataSaveReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainGameSaveDataSaveReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemSaveDataLoadErrorStartFlgReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainGameSaveDataLoadErrorStartFlgReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemSaveDataSaveErrorStartFlgReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainGameSaveDataSaveStartFlgReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionParam OptionParamBakup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionParam OptionParamSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bErrorStartFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreFocusErrorEnd;
    
    USSSaveDataManager();

    UFUNCTION(BlueprintCallable)
    void StartFileChkSaveData();
    
    UFUNCTION(BlueprintCallable)
    void StartErrorDialog(bool InRestoreFocusErrorEnd);
    
    UFUNCTION(BlueprintCallable)
    void StartDelSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool StartDelDramaticEditImageSaveData(TArray<FString> InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void SaveSystemSaveData(bool InErrorStartFlg, bool InRestoreFocusErrorEnd);
    
    UFUNCTION(BlueprintCallable)
    void SaveMainGameSaveData(EKoratMainGameSaveMode InMode, bool InErrorStartFlg, bool InRestoreFocusErrorEnd);
    
    UFUNCTION(BlueprintCallable)
    bool SaveDramaticEditImageSaveData(TArray<USSDramaticEditImageSaveData*> InDramaticEditImageSaveData);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveDataFLag();
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveData(USSGameInstance* IngameInstance);
    
    UFUNCTION(BlueprintCallable)
    bool ReLoadMainGameSaveData(EKoratMainGameSaveMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void LoadSystemSaveData(bool InLoadDebug, bool InErrorStartFlg, bool InRestoreFocusErrorEnd);
    
    UFUNCTION(BlueprintCallable)
    void LoadMainGameSaveData(bool InLoadDebug, bool InErrorStartFlg, bool InRestoreFocusErrorEnd);
    
    UFUNCTION(BlueprintCallable)
    bool LoadDramaticEditImageSaveData(TArray<USSDramaticEditImageSaveData*> InDramaticEditImageSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStatusError() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSaveEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsError();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSaveData(USSGameInstance* IngameInstance);
    
    UFUNCTION(BlueprintCallable)
    USSSystemSaveData* GetSystemSavedata();
    
    UFUNCTION(BlueprintCallable)
    USSMainGameSaveData* GetMainGameSavedata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetErrorStartFlg() const;
    
};

