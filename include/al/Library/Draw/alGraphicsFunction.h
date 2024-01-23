#pragma once

#include "nn/gfx/gfx_VariationBase.h"
#include "agl/include/common/aglGPUCommon.hpp"
#include "sead/math/seadVector.h"
#include "al/Library/Scene/Scene.h"


namespace al
{
    class LiveActor;
    class ActorInitInfo;

    class FullScreenTriangle;

    class FootPrintRequestInfo;
    class ModelCtrl;
    class ModelShaderHolder;
}

namespace agl
{
    class ConstGPUMemVoidAddr;

}

namespace nn
{
    namespace g3d
    {
        class ResMesh;
        class ResVertex;
    }
    namespace gfx
    {
        template<typename T>
        class TBuffer;
    }
}

class NVNbuffer;
class NVNmemoryPool;

namespace alGraphicsFunction
{
    void appearFootPrint(al::LiveActor const*,al::FootPrintRequestInfo *);
    void calcDirectionalLightDir(al::LiveActor const*);
    void calcIndexBufferGPUAddress(nn::g3d::ResMesh &);
    void calcMemoryPoolOffset(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>> const&);
    void calcVertexBufferGPUAddress(nn::g3d::ResVertex const&,int);
    void disappearFootPrint(al::LiveActor const*,al::FootPrintRequestInfo *);
    void forceGraphicsQualityModeConsole(al::Scene *);
    void forceGraphicsQualityModeHandheld(al::Scene *);
    void forceGraphicsQualityModeSnapShot(al::Scene *);
    void getDepthShadowFarLength(al::LiveActor const*);
    void getDirectionalLightDir(al::LiveActor const*);
    void getGPUAddress(NVNbuffer const&);
    void getGPUAddress(agl::ConstGPUMemVoidAddr const&);
    void getGPUAddress(agl::GPUMemVoidAddr const&);
    void getGPUAddress(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>> const&);
    void getGPUAddressMemoryPool(NVNmemoryPool *);
    void getGPUAddressMemoryPool(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>> const&);
    void* getMemoryPoolPtr(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>> const&);
    void getMemoryPoolSize(NVNmemoryPool const*);
    void invalidateCameraBlurSystem(al::Scene *);
    void invalidateGpuStressAnalyzer(al::Scene *);
    void invalidateModelLodAll(al::Scene *);
    void invalidateOcclusionCullingSystem(al::Scene *);
    void isEnableRain(al::Scene *);
    void isGraphicsQualityModeConsole(al::LiveActor const*);
    void isGraphicsQualityModeHandheld(al::LiveActor const*);
    void isValidGpuStressAnalyzer(al::Scene *);
    void registerGraphicsPreset(char const*,char const*,char const*,al::ActorInitInfo const&,bool);
    void requestChangeShaderVariation(al::LiveActor const*,char const*,char const*,bool);
    void requestChangeShaderVariation(al::ModelCtrl *,al::ModelShaderHolder *,char const*,char const*,bool);
    void requestChangeShaderVariation(al::ModelCtrl *,int,al::ModelShaderHolder *,char const*,char const*,bool);
    void requestChangeShaderVariationWithoutForward(al::LiveActor const*,char const*,char const*,bool);
    void requestGraphicsPreset(al::LiveActor const*,char const*,int,int,int,sead::Vector3f const&);
    void requestUpdateMaterialInfo(al::Scene *);
    void setFogNoiseUpdateFlag(al::Scene *,bool);
    void setMaterialLightUpdateBaseAngleChanged(al::Scene *,bool);
    void setRainControl(al::LiveActor const*,float);
    void setRainUpdateFlag(al::Scene *,bool);
    void setSphereMapUpdateEveryFrame(al::Scene *,sead::Vector3f const&);
    void unforceGraphicsQualityMode(al::Scene *);
    void validateCameraBlurSystem(al::Scene *);
    void validateGpuStressAnalyzer(al::Scene *);
    void validateModelLodAll(al::Scene *);
    void validateOcclusionCullingSystem(al::Scene *);
}