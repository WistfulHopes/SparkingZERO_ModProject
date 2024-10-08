#include "SpParticleModuleLocationStaticVertSurface.h"

USpParticleModuleLocationStaticVertSurface::USpParticleModuleLocationStaticVertSurface() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bFinalUpdateModule = true;
    this->bUpdateForGPUEmitter = true;
    this->bSupported3DDrawMode = true;
    this->SourceType = SP_STATICVERTSURFACESOURCE_Vert;
    this->bUpdatePositionEachFrame = false;
    this->bOrientMeshEmitters = true;
    this->StaticMeshActorParamName = TEXT("StaticActor");
    this->bEnforceNormalCheck = false;
    this->NormalCheckToleranceDegrees = 0.00f;
    this->NormalCheckTolerance = 0.00f;
    this->bInheritVertexColor = false;
    this->bInheritUV = false;
    this->InheritUVChannel = 0;
}


