#pragma once

//#include "al/collision/CollisionPartsFilter.h"

namespace al
{
    class CollisionPartsFilterBase;
}

namespace al
{
    class CollisionDirector // size==0x58|88
    {
        unsigned char unk1[0x20];
        al::CollisionPartsFilterBase* mCollisionPartsFilterBase;
    };

    class IUseCollision
    {
    public:
        virtual al::CollisionDirector* getCollisionDirector() const = 0;
    };
};