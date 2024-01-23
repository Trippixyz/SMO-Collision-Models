#pragma once

#include "al/Library/LiveActor/ActionAnimCtrl.h"

namespace al {
    class LiveActor;
    class ActionFlagCtrl;
    class ActionEffectCtrl;
    class ActionSeCtrl;
    class ActionBgmCtrl;
    class ActionPadAndCameraCtrl;
    class ActionScreenEffectCtrl;

    class ActorActionKeeper {
    public:
        al::LiveActor* mRootActor;
        void* unk1;
        void* padding1;
        al::ActionAnimCtrl* mActionAnimCtrl;
        void* unk2;
        al::ActionFlagCtrl* mActionFlagCtrl;
        al::ActionEffectCtrl* mActionEffectCtrl;
        al::ActionSeCtrl* mActionSeCtrl;
        al::ActionBgmCtrl* mActionBgmCtrl;
        al::ActionPadAndCameraCtrl* mActionPadAndCameraCtrl;
        al::ActionScreenEffectCtrl* mActionScreenEffectCtrl;
    };
}