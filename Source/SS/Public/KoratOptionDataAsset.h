#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ESSKeyInputType.h"
#include "KoratOptionButtonData.h"
#include "KoratOptionKeyButtonData.h"
#include "KoratOptionLeftRightHandChangeData.h"
#include "KoratOptionPadGroupListData.h"
#include "KoratOptionPadSelectSetData.h"
#include "MutualDataAsset.h"
#include "SSDialogTextData.h"
#include "KoratOptionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratOptionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> LanguageNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> HDRNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> TextConversionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> DateTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> DateTimePeriodList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FString> ControlPadTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FString> KeyIconTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FString> KeyIconTextWinTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FKoratOptionButtonData> ButtonTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FKoratOptionKeyButtonData> PadButtonTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDialogTextData> DialogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> OperationPadStandard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> OperationPadClassic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FKey> PadIconFKeyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratOptionPadSelectSetData> PadSelectSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratOptionLeftRightHandChangeData> PadHandChangeControlTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratOptionLeftRightHandChangeData> PadHandChangeControlTableUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratOptionLeftRightHandChangeData> PadHandChangeControlTableLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratOptionLeftRightHandChangeData> PadHandChangeControlTableUILR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FKoratOptionPadGroupListData> OptionPadGroupList;
    
public:
    UKoratOptionDataAsset();

};

