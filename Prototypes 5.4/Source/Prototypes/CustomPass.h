#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomPass.generated.h"

UCLASS()
class PROTOTYPES_API ACustomPass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomPass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	FLinearColor TendrilEdgeColor;

	UPROPERTY(EditAnywhere)
	float DepthBias = 0.9f;

	UPROPERTY(EditAnywhere)
	float EdgeThickness = 3.8f;

	UPROPERTY(EditAnywhere)
	float EdgeIntensity = 415.f;

	UPROPERTY(EditAnywhere)
	float NoiseSize = 5.f;

	UPROPERTY(EditAnywhere)
	float NoiseStrength = 2.f;

	UPROPERTY(EditAnywhere)
	float NoiseMovementSpeed = 0.2f;

	UPROPERTY(EditAnywhere)
	bool DebugLines = false;

	UPROPERTY(EditAnywhere)
	UTexture2D* NoiseTex = nullptr;

	UPROPERTY(EditAnywhere)
	UTexture2D* FogNoiseTex = nullptr;

	UPROPERTY(EditAnywhere)
	FLinearColor FogColor;

	UPROPERTY(EditAnywhere)
	FLinearColor FogSmokeColor;

	UPROPERTY(EditAnywhere)
	float FogMovementSpeed;

	UPROPERTY(EditAnywhere)
	float FogDensity;

	UPROPERTY(EditAnywhere)
	float FogFar;

	UPROPERTY(EditAnywhere)
	float FogNoiseScale;

	TSharedPtr<class FMyViewExtension, ESPMode::ThreadSafe> MyViewExtension;
	
};
