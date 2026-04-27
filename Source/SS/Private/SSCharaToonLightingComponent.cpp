#include "SSCharaToonLightingComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/SkeletalMesh.h"

USSCharaToonLightingComponent::USSCharaToonLightingComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    this->bDebugPointLightLocation = false;
}

void USSCharaToonLightingComponent::ExecApplyShading(bool bConstruction, UMeshComponent* InMesh) {
}

void USSCharaToonLightingComponent::ApplyShells()
{
#if WITH_EDITORONLY_DATA

    if (!bEnableShellApplication)
    {
        if (GetOwner())
        {
            TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
            GetOwner()->GetComponents<USkeletalMeshComponent>(SkeletalMeshComponents);
            for (USkeletalMeshComponent* MeshComp : SkeletalMeshComponents)
            {
                if (MeshComp)
                {
                    MeshComp->SetOverlayMaterial(nullptr);
                }
            }
        }
        return;
    }

    if (!GetOwner()) return;

    TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    GetOwner()->GetComponents<USkeletalMeshComponent>(SkeletalMeshComponents);

    // Collect relevant meshes
    TSet<FName> MeshesToReceiveShell;
    for (const FSSOutlineMeshSetting& Setting : ToonMeshSettings.MeshSettings)
    {
        if (Setting.bReceiveShell)
        {
            MeshesToReceiveShell.Add(Setting.MainMeshName);
        }
    }

    // ★ Use selected material
    UMaterialInterface* OverlayMaterial = ShellMaterial;

    // Fallback material load if none selected
    if (!OverlayMaterial)
    {
        OverlayMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/FixesForCustomEngine/MI_ToonShadingShell.MI_ToonShadingShell"));
        if (!OverlayMaterial)
        {
            OverlayMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/FixesForCustomEngine/M_ChrShell.M_ChrShell"));
        }
    }

    for (USkeletalMeshComponent* MeshComp : SkeletalMeshComponents)
    {
        if (!MeshComp) continue;

        FName MeshName = MeshComp->GetFName();

        if (MeshesToReceiveShell.Contains(MeshName))
        {
            if (OverlayMaterial)
            {
                UMaterialInstanceDynamic* DynMat = UMaterialInstanceDynamic::Create(OverlayMaterial, this);
                if (DynMat)
                {
                    DynMat->SetVectorParameterValue("ShellColor", ToonMeshSettings.OutlineColor);
                    MeshComp->SetOverlayMaterial(DynMat);
                }
            }
        }
        else
        {
            MeshComp->SetOverlayMaterial(nullptr);
        }
    }

#endif
}

template <typename T>
T* USSCharaToonLightingComponent::FindComponentByName(FName Name)
{
    TArray<T*> Components;
    GetOwner()->GetComponents<T>(Components);
    for (T* Comp : Components)
    {
        if (Comp && Comp->GetFName() == Name)
        {
            return Comp;
        }
    }
    return nullptr;
}

void USSCharaToonLightingComponent::OnRegister()
{
    Super::OnRegister();

    // Runtime fix — editor BPs may still have 0.0 saved
    if (ToonMeshSettings.OutlineColor.A <= 0.01f)
    {
        ToonMeshSettings.OutlineColor.A = 0.8f;
    }

    ApplyShells();
}

#if WITH_EDITOR

void USSCharaToonLightingComponent::PostEditComponentMove(bool bFinished)
{
    Super::PostEditComponentMove(bFinished);
    if (bFinished)
    {
        ApplyShells(); // Applies when you move actor in editor
    }
}

void USSCharaToonLightingComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    FName PropertyName = PropertyChangedEvent.GetPropertyName();

    if (PropertyName == GET_MEMBER_NAME_CHECKED(USSCharaToonLightingComponent, bEnableShellApplication) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(USSCharaToonLightingComponent, ToonMeshSettings))
    {
        ApplyShells();
    }
}

#endif

void USSCharaToonLightingComponent::OnComponentCreated()
{
    Super::OnComponentCreated();

#if WITH_EDITOR
    ApplyShells(); // Try to trigger even earlier when dragged in
#endif
}

