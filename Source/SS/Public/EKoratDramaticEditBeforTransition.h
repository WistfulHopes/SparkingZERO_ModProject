#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditBeforTransition.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditBeforTransition : uint8 {
    None,
    EditTopBattle,
    StageSelect,
    Character,
    GuestCharcter,
    SceneEditor,
    CutEditor,
    ScenePreview,
    SceneList,
    CutUpdate,
    CutUpdateEditThumbnail,
    CutUpdateEditPreview,
    CutUpdateSceneEditor,
    CutUpdatePostBattle,
};

