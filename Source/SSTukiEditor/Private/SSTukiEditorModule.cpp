#include "SSTukiEditorModule.h"
#include "Modules/ModuleManager.h"
#include "ISequencerModule.h"
#include "KoratMovieSceneAttachTrackEditor.h"
#include "KoratMovieSceneBattleSubtitleTrackEditor.h"
#include "KawaiiPhysicsTrackEditor.h"
#include "KoratFreeMaterialTrackEditor.h"
#include "KoratMovieSceneVisibilityTrackEditor.h"
#include "ViewSwitchTrackEditor.h"
#include "KoratToonPointLightTrackEditor.h"
#include "KoratMovieSceneEventSceneTrackEditor.h"
#include "KoratMovieSceneEventSceneFpsCameraTrackEditor.h"
#include "KoratMovieSceneEventSceneImpactTrackEditor.h"
#include "KoratMovieSceneLookAtTrackEditor.h"
#include "KoratMovieSceneUIActionBlendOptionTrackEditor.h"
#include "MovieSceneTrailsTrackEditor.h"
#include "KoratMovieSceneOutlineStencilIndexTrackEditor.h"
#include "TriggerEffectTrackEditor.h"
#include "KoratSoundSceneTrackEditor.h"

#define LOCTEXT_NAMESPACE "FSSTukiEditorModule"

void FSSTukiEditorModule::StartupModule()
{
    // Get the Sequencer module
    ISequencerModule& SequencerModule = FModuleManager::LoadModuleChecked<ISequencerModule>("Sequencer");

    // Register each custom track editor and store the handles
    TukiAttachTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratAttachTrackEditor::CreateTrackEditor));
    TukiBattleSubtitleTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratBattleSubtitleTrackEditor::CreateTrackEditor));
    TukiKawaiiPhysicsTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKawaiiPhysicsTrackEditor::CreateTrackEditor));
    TukiFreeMaterialTrackEditorHandle =  SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratFreeMaterialTrackEditor::CreateTrackEditor));
    TukiVisibilityTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratMovieSceneVisibilityTrackEditor::CreateTrackEditor));
    TukiViewSwitchTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FViewSwitchTrackEditor::CreateTrackEditor));
    TukiToonPointLightTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratToonPointLightTrackEditor::CreateTrackEditor));
    TukiEventSceneTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratEventSceneTrackEditor::CreateTrackEditor));
    TukiEventSceneFpsCameraTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratEventSceneFpsCameraTrackEditor::CreateTrackEditor));
    TukiEventSceneImpactTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratEventSceneImpactTrackEditor::CreateTrackEditor));
    TukiLookAtTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratLookAtTrackEditor::CreateTrackEditor));
    TukiUIActionBlendOptionTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratUIActionBlendOptionTrackEditor::CreateTrackEditor));
    TukiTrailsTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FMovieSceneTrailsTrackEditor::CreateTrackEditor));
    TukiOutlineStencilIndexTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratOutlineStencilIndexTrackEditor::CreateTrackEditor));
    TukiTriggerEffectTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FTriggerEffectTrackEditor::CreateTrackEditor));
    TukiSoundSceneTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratSoundSceneTrackEditor::CreateTrackEditor));
    
}

void FSSTukiEditorModule::ShutdownModule()
{
    if (FModuleManager::Get().IsModuleLoaded("Sequencer"))
    {
        ISequencerModule& SequencerModule = FModuleManager::GetModuleChecked<ISequencerModule>("Sequencer");

        // Unregister each track editor using the stored handles
        SequencerModule.UnRegisterTrackEditor(TukiAttachTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiBattleSubtitleTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiKawaiiPhysicsTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiFreeMaterialTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiVisibilityTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiViewSwitchTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiToonPointLightTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiEventSceneTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiEventSceneFpsCameraTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiEventSceneImpactTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiLookAtTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiUIActionBlendOptionTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiTrailsTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiOutlineStencilIndexTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TukiTriggerEffectTrackEditorHandle);       
        SequencerModule.UnRegisterTrackEditor(TukiSoundSceneTrackEditorHandle);
    }
}

#undef LOCTEXT_NAMESPACE

// Required to implement the module and register it
IMPLEMENT_MODULE(FSSTukiEditorModule, SSTukiEditor);
