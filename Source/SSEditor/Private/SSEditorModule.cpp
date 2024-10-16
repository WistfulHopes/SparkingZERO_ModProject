#include "SSEditorModule.h"
#include "Modules/ModuleManager.h"
#include "ISequencerModule.h"

#include "KoratTrackEditors.h"

#define LOCTEXT_NAMESPACE "FSSEditorModule"

void FSSEditorModule::StartupModule()
{
    // Get the Sequencer module
    ISequencerModule& SequencerModule = FModuleManager::LoadModuleChecked<ISequencerModule>("Sequencer");

    // Register each custom track editor and store the handles
    AttachTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratAttachTrackEditor::CreateTrackEditor));
    EventSceneFpsCameraTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratEventSceneFpsCameraTrackEditor::CreateTrackEditor));
    EventSceneImpactTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratEventSceneImpactTrackEditor::CreateTrackEditor));
    LookAtTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratLookAtTrackEditor::CreateTrackEditor));
    OutlineStencilIndexTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratOutlineStencilIndexTrackEditor::CreateTrackEditor));
    UIActionBlendOptionTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKoratUIActionBlendOptionTrackEditor::CreateTrackEditor));
    ViewSwitchTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FViewSwitchTrackEditor::CreateTrackEditor));
    BattleSubtitleTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FBattleSubtitleTrackEditor::CreateTrackEditor));
    EventSceneTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FEventSceneTrackEditor::CreateTrackEditor));
    SoundSceneTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FSoundSceneTrackEditor::CreateTrackEditor));
    KawaiiPhysicsTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FKawaiiPhysicsTrackEditor::CreateTrackEditor));
    ToonPointLightTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FToonPointLightTrackEditor::CreateTrackEditor));
    TrailsTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FTrailsTrackEditor::CreateTrackEditor));
    TriggerEffectTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FTriggerEffectTrackEditor::CreateTrackEditor));
    // Additional initialization if required
}

void FSSEditorModule::ShutdownModule()
{
    if (FModuleManager::Get().IsModuleLoaded("Sequencer"))
    {
        ISequencerModule& SequencerModule = FModuleManager::GetModuleChecked<ISequencerModule>("Sequencer");

        // Unregister each track editor using the stored handles
        SequencerModule.UnRegisterTrackEditor(AttachTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(EventSceneFpsCameraTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(EventSceneImpactTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(LookAtTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(OutlineStencilIndexTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(UIActionBlendOptionTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(ViewSwitchTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(BattleSubtitleTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(EventSceneTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(SoundSceneTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(KawaiiPhysicsTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(ToonPointLightTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TrailsTrackEditorHandle);
        SequencerModule.UnRegisterTrackEditor(TriggerEffectTrackEditorHandle);
    }
}

#undef LOCTEXT_NAMESPACE

// Required to implement the module and register it
IMPLEMENT_MODULE(FSSEditorModule, SSEditor)
