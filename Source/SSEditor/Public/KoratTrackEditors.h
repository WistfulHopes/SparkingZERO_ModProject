#pragma once

#include "KoratMovieSceneAttachTrack.h"
#include "KoratMovieSceneBattleSubtitleTrack.h"
#include "KoratMovieSceneEventSceneFpsCameraTrack.h"
#include "KoratMovieSceneEventSceneImpactTrack.h"
#include "KoratMovieSceneEventSceneTrack.h"
#include "KoratMovieSceneLookAtTrack.h"
#include "KoratMovieSceneOutlineStencilIndexTrack.h"
#include "KoratMovieSceneSoundSceneTrack.h"
#include "KoratMovieSceneUIActionBlendOptionTrack.h"
#include "MovieSceneKawaiiPhysicsTrack.h"
#include "MovieSceneKoratToonPointLightTrack.h"
#include "MovieSceneTrailsTrack.h"
#include "MovieSceneTriggerEffectTrack.h"
#include "MovieSceneViewSwitchTrack.h"
#include "PropertyTrackEditor.h"


class FKoratAttachTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneAttachTrack>
{
public:
    FKoratAttachTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FPropertyTrackEditor<UKoratMovieSceneAttachTrack>(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratAttachTrackEditor(InSequencer));
    }

    // Specify the type of track this editor supports
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneAttachTrack::StaticClass();
    }

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override {}
};

class FKoratEventSceneFpsCameraTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneEventSceneFpsCameraTrack>
{
public:
    FKoratEventSceneFpsCameraTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FPropertyTrackEditor<UKoratMovieSceneEventSceneFpsCameraTrack>(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratEventSceneFpsCameraTrackEditor(InSequencer));
    }

    // SupportsType implementation
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneEventSceneFpsCameraTrack::StaticClass();
    }

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override {}
};

class FKoratEventSceneImpactTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneEventSceneImpactTrack>
{
public:
    FKoratEventSceneImpactTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FPropertyTrackEditor<UKoratMovieSceneEventSceneImpactTrack>(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratEventSceneImpactTrackEditor(InSequencer));
    }

    // SupportsType implementation
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneEventSceneImpactTrack::StaticClass();
    }

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override {}
};

class FKoratLookAtTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneLookAtTrack>
{
public:
    FKoratLookAtTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FPropertyTrackEditor<UKoratMovieSceneLookAtTrack>(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratLookAtTrackEditor(InSequencer));
    }

    // SupportsType implementation
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneLookAtTrack::StaticClass();
    }

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override {}
};

class FKoratOutlineStencilIndexTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneOutlineStencilIndexTrack>
{
public:
    FKoratOutlineStencilIndexTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FPropertyTrackEditor<UKoratMovieSceneOutlineStencilIndexTrack>(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratOutlineStencilIndexTrackEditor(InSequencer));
    }

    // SupportsType implementation
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneOutlineStencilIndexTrack::StaticClass();
    }

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override {}
};

class FKoratUIActionBlendOptionTrackEditor : public FPropertyTrackEditor<UKoratMovieSceneUIActionBlendOptionTrack>
{
public:
    FKoratUIActionBlendOptionTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FPropertyTrackEditor<UKoratMovieSceneUIActionBlendOptionTrack>(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKoratUIActionBlendOptionTrackEditor(InSequencer));
    }

    // SupportsType implementation
    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneUIActionBlendOptionTrack::StaticClass();
    }

    virtual void GenerateKeysFromPropertyChanged(const FPropertyChangedParams&, UMovieSceneSection* SectionToKey, FGeneratedTrackKeys&) override {}
};

class FViewSwitchTrackEditor : public FMovieSceneTrackEditor
{
public:
    FViewSwitchTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FViewSwitchTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UMovieSceneViewSwitchTrack::StaticClass();
    }
};

class FBattleSubtitleTrackEditor : public FMovieSceneTrackEditor
{
public:
    FBattleSubtitleTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FBattleSubtitleTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneBattleSubtitleTrack::StaticClass();
    }
};


class FEventSceneTrackEditor : public FMovieSceneTrackEditor
{
public:
    FEventSceneTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FEventSceneTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneEventSceneTrack::StaticClass();
    }
};


class FSoundSceneTrackEditor : public FMovieSceneTrackEditor
{
public:
    FSoundSceneTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FSoundSceneTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UKoratMovieSceneSoundSceneTrack::StaticClass();
    }
};


class FKawaiiPhysicsTrackEditor : public FMovieSceneTrackEditor
{
public:
    FKawaiiPhysicsTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FKawaiiPhysicsTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UMovieSceneKawaiiPhysicsTrack::StaticClass();
    }
};


class FToonPointLightTrackEditor : public FMovieSceneTrackEditor
{
public:
    FToonPointLightTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FToonPointLightTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UMovieSceneKoratToonPointLightTrack::StaticClass();
    }
};


class FTrailsTrackEditor : public FMovieSceneTrackEditor
{
public:
    FTrailsTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FTrailsTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UMovieSceneTrailsTrack::StaticClass();
    }
};


class FTriggerEffectTrackEditor : public FMovieSceneTrackEditor
{
public:
    FTriggerEffectTrackEditor(TSharedRef<ISequencer> InSequencer)
        : FMovieSceneTrackEditor(InSequencer) {}

    static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
    {
        return MakeShareable(new FTriggerEffectTrackEditor(InSequencer));
    }

    virtual bool SupportsType(TSubclassOf<UMovieSceneTrack> TrackClass) const override
    {
        return TrackClass == UMovieSceneTriggerEffectTrack::StaticClass();
    }
};

