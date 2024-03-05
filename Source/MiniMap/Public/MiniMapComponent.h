// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MiniMapComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MINIMAP_API UMiniMapComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMiniMapComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UTextureRenderTarget2D*GetMiniMapTextureTarget();


protected:
	/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */
	UPROPERTY(EditAnywhere, Category = TransformFromBounds)
	TSoftObjectPtr<AActor> BoundsAlignActor = nullptr;

	/** Placeholder for details customization button. */
	UPROPERTY(VisibleAnywhere, Transient, Category = TransformFromBounds)
	bool bSetBoundsButton;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = TransformFromBounds, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UTextureRenderTarget2D> MiniMapTextureTarget;


public:
	
#if WITH_EDITOR
	/** Get the BoundsAlignActor on this component. */
	void SetBoundsAlignActor(AActor* InActor);
	/** Get the BoundsAlignActor on this component. */
	TSoftObjectPtr<AActor>& GetBoundsAlignActor() { return BoundsAlignActor; }
#endif

};
