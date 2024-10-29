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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	bool DebugLines = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	FLinearColor TendrilEdgeColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	float DepthBias = 0.9f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	float EdgeThickness = 3.8f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	float EdgeIntensity = 415.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura parameters")
	UTexture2D* NoiseTex = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura parameters")
	float NoiseSize = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura parameters")
	float NoiseStrength = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura parameters")
	float NoiseMovementSpeed = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	UTexture2D* FogNoiseTex = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	FLinearColor FogColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	FLinearColor FogSmokeColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogFar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogNear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogNoiseScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Circle parameters")
	float CircleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "Circle parameters")
	float CircleBlend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Circle parameters")
	FVector2f CircleCenter;

	TSharedPtr<class FMyViewExtension, ESPMode::ThreadSafe> MyViewExtension;
	
};
