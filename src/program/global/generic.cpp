#include "generic.h"

namespace global {

    GINT_Impl(stageSceneTimer)

    GVAR_Impl(StageScene*, stageScene)

    GVAR_Create(PlayerActorHakoniwa*, playerActorHakoniwa) {

        return (PlayerActorHakoniwa*)al::tryGetPlayerActor(al::getScenePlayerHolder(stageScene()), 0);
    }
}