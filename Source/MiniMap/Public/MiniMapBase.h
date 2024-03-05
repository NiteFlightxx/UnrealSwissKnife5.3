// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiniMapBase.generated.h"

class UMiniMapComponent;
class USpringArmComponent;
class UBoxComponent;

UCLASS()
class MINIMAP_API AMiniMapBase : public AActor
{
	GENERATED_BODY()
	
	
	AMiniMapBase();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
	
	FORCEINLINE UBoxComponent* GetBoundsBox() const
	{
		return BoundsBox;
	}


	FORCEINLINE USceneCaptureComponent2D* GetCaptureComponent() const
	{
		return CaptureComponent;
	}

	FORCEINLINE USpringArmComponent*GetSpringArmComponent()const
	{
		return CameraSpringArm;
	}
	
	FORCEINLINE FVector GetMapCentralPosition() const
	{
		
			return MapCentralPosition;

	}

	FORCEINLINE UMiniMapComponent* GetMiniMapComponent() const
	{
		
			return MiniMapComponent;
		
	}

	UFUNCTION(BlueprintCallable,Category="MiniMap")
	void SetMapCentralPosition(FVector CentralPosition) ;

	UFUNCTION(BlueprintPure,Category="MiniMap")
	float GetMinimumX() const;

	UFUNCTION(Category="MiniMap")
	void SetMinimumX(float MinX);

	UFUNCTION(BlueprintPure,Category="MiniMap")
	float GetMaximumX() const;

	UFUNCTION(Category="MiniMap")
	void SetMaximumX(float MaxX);

	UFUNCTION(BlueprintPure,Category="MiniMap")
	float GetMinimumY() const;

	UFUNCTION(Category="MiniMap")
	void SetMinimumY(float MinY);

	UFUNCTION(BlueprintPure,Category="MiniMap")
	float GetMaximumY() const;

	UFUNCTION(Category="MiniMap")
	void SetMaximumY(float MaxY);

private:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = MiniMapComponent, meta = (AllowPrivateAccess = "true"))
	UMiniMapComponent * MiniMapComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MiniMapComponent, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent * CameraSpringArm;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MiniMapComponent, meta = (AllowPrivateAccess = "true"))
	USceneCaptureComponent2D * CaptureComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MiniMapComponent, meta = (AllowPrivateAccess = "true"))
	UBoxComponent * BoundsBox ;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = TransformFromBounds, meta = (AllowPrivateAccess = "true"))
	FVector MapCentralPosition;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = TransformFromBounds, meta = (AllowPrivateAccess = "true"))
	float MinimumX;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = TransformFromBounds, meta = (AllowPrivateAccess = "true"))
	float MaximumX;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = TransformFromBounds, meta = (AllowPrivateAccess = "true"))
	float MinimumY;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = TransformFromBounds, meta = (AllowPrivateAccess = "true"))
	float MaximumY;


#if WITH_EDITOR
	virtual bool CanChangeIsSpatiallyLoadedFlag() const override { return false; }
#endif

protected:
	//~ Begin UObject Interface.
	virtual bool NeedsLoadForServer() const override { return false; }
	
	virtual bool IsLevelBoundsRelevant() const override { return false; }
	
};
