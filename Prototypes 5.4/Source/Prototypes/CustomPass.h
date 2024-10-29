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
	FLinearColor TendrilEdgeColor = FLinearColor(1.000000, 0.177356, 0.000000, 1.000000);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	float DepthBias = 0.75f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	float EdgeThickness = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Edge parameters")
	float EdgeIntensity = 271.f;

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
	FLinearColor FogColor = FLinearColor(0.035417,0.000000,0.000000, 1.000000);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	FLinearColor FogSmokeColor = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogMovementSpeed = 0.01f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogDensity = 0.65f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogFar = 130.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogNear = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fog parameters")
	float FogNoiseScale = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Circle parameters")
	float CircleRadius = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "Circle parameters")
	float CircleBlend = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Circle parameters")
	FVector2f CircleCenter = FVector2f(0.5f, 0.5f);

	TSharedPtr<class FMyViewExtension, ESPMode::ThreadSafe> MyViewExtension;
	
};
