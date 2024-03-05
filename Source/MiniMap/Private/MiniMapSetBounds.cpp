#include "MiniMapSetBounds.h"

#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"
#include "Landscape.h"
#include "LandscapeInfo.h"
#include "LandscapeStreamingProxy.h"
#include "MiniMapComponent.h"
#include "MiniMapBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/UObjectIterator.h"

namespace MiniMap
{
void SetBounds(UMiniMapComponent* InComponent)
	{
		AMiniMapBase* MiniMapBase= nullptr;

		if(AActor* Owner = InComponent->GetOwner())
		{
			MiniMapBase = CastChecked<AMiniMapBase>(Owner);
		}
	
		check(MiniMapBase != nullptr);
	
		TSoftObjectPtr<AActor>& BoundsAlignActor = InComponent->GetBoundsAlignActor();
	
		const FVector TargetPosition = BoundsAlignActor->ActorToWorld().GetTranslation();
	
		const FQuat TargetRotation=BoundsAlignActor->GetTransform().GetRotation();

		FTransform LocalTransform;
		LocalTransform.SetComponents(TargetRotation, TargetPosition, FVector::OneVector);
		FTransform WorldToLocal = LocalTransform.Inverse();
		FBox Bounds(ForceInit);
		for (TObjectIterator<UPrimitiveComponent> It(RF_ClassDefaultObject, true, EInternalObjectFlags::Garbage); It; ++It)
		{
			if (BoundsAlignActor.IsValid()&& It->GetOwner() == BoundsAlignActor.Get())
			{
				FBoxSphereBounds LocalSpaceBounds = It->CalcBounds(It->GetComponentTransform() * WorldToLocal);
				if (LocalSpaceBounds.GetBox().GetVolume() > 0.f)
				{
					Bounds += LocalSpaceBounds.GetBox();
				}
			}
		}
	
		FTransform Transform;
	
		FVector Origin,Extent;
		BoundsAlignActor->GetActorBounds(false,Origin,Extent,false);
	
		Transform.SetComponents(TargetRotation, Origin, Bounds.GetSize());
	
			ALandscape const* Landscape = Cast<ALandscape>(BoundsAlignActor.Get());
			if (Landscape != nullptr)
			{
				FBox LandscapeBounds=Landscape->GetLoadedBounds();
				const FVector LandscapeProxySize = LandscapeBounds.GetSize();
				Transform.SetScale3D(LandscapeProxySize);
				
			}
	
		if (MiniMapBase->GetCaptureComponent()->ProjectionType==ECameraProjectionMode::Orthographic)
			{
			float CaptureOrthoWidth=FMath::Max( Transform.GetScale3D().X, Transform.GetScale3D().Y);
			
			float TargetArmLength=FMath::Clamp(CaptureOrthoWidth/2.f,0.f,249300.f);
			MiniMapBase->GetCaptureComponent()->OrthoWidth=CaptureOrthoWidth;
			MiniMapBase->GetSpringArmComponent()->TargetArmLength=TargetArmLength;
			MiniMapBase->GetSpringArmComponent()->SetRelativeRotation(FRotator(-90.f,0.f,-90.f));
			}
	

	MiniMapBase->Modify();

	MiniMapBase->SetActorLocation(Transform.GetTranslation());
	MiniMapBase->GetBoundsBox()->SetRelativeScale3D(Transform.GetScale3D());
	MiniMapBase->SetActorRotation(Transform.GetRotation());
	
	MiniMapBase->SetMapCentralPosition(Transform.GetTranslation());
	MiniMapBase->SetMinimumX(Transform.GetTranslation().X-Transform.GetScale3D().X/2.f);
	MiniMapBase->SetMaximumX(Transform.GetTranslation().X+Transform.GetScale3D().X/2.f);
	MiniMapBase->SetMinimumY(Transform.GetTranslation().Y-Transform.GetScale3D().Y/2.f);
	MiniMapBase->SetMaximumY(Transform.GetTranslation().Y+Transform.GetScale3D().Y/2.f);

	MiniMapBase->GetCaptureComponent()->TextureTarget=
		MiniMapBase->GetMiniMapComponent()->GetMiniMapTextureTarget();
	
	MiniMapBase->PostEditMove(true);
	}
	
}
