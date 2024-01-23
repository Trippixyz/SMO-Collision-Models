#pragma once

#include "al/Library/Collision/CollisionParts.h"
#include "al/Library/Draw/alGraphicsFunction.h"
#include "al/Project/HitSensor/HitSensor.h"

typedef bool (* FilterFunc)(al::CollisionParts const&);

namespace al
{
    class CollisionPartsFilterBase // size==?|?
    {
    public:
        virtual bool isInvalidParts(const al::CollisionParts &);
        void* mStorage; // depends on the type
    };

    class CollisionPartsFilterActor : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterSubActor : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterConnectedSensor : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterSpecialPurpose : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterOnlySpecialPurpose : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterIgnoreSpecialPurpose : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterIgnoreOptionalPurpose : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterFunc : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterFuncSendMsg : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CollisionPartsFilterMergePair : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };

    class CameraCollisionPartsFilter : CollisionPartsFilterBase
    {
    public:
        bool isInvalidParts(const al::CollisionParts &) override;
    };
}

// custom
class CollisionPartsFilterOwnParts : al::CollisionPartsFilterBase
{
public:
    CollisionPartsFilterOwnParts(al::LiveActor* liveActor);
    bool isInvalidParts(const al::CollisionParts &) override;
    al::LiveActor* mLiveActor;
};

const CollisionPartsFilterOwnParts* createCollisionPartsFilterOwnParts(al::LiveActor* liveActor);