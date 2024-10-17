// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPass.h"
#include "MyViewExtension.h"

// Sets default values
ACustomPass::ACustomPass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UTexture2D> NoiseTexObj(TEXT("Texture2D'/Game/Textures/TendrilTex.TendrilTex'"));

	if (NoiseTexObj.Object != NULL)
	{
		NoiseTex = NoiseTexObj.Object;
	}
}

// Called when the game starts or when spawned
void ACustomPass::BeginPlay()
{
	Super::BeginPlay();
	MyViewExtension = FSceneViewExtensions::NewExtension<FMyViewExtension>(TendrilEdgeColor, DepthBias, EdgeThickness, EdgeIntensity, NoiseSize, NoiseStrength, NoiseMovementSpeed, NoiseTex);
}

void ACustomPass::OnConstruction(const FTransform & Transform)
{
}

// Called every frame
void ACustomPass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MyViewExtension->SetDepthBias(DepthBias);
	MyViewExtension->SetEdgeThickness(EdgeThickness);
	MyViewExtension->SetEdgeIntensity(EdgeIntensity);
	MyViewExtension->SetTendrilEdgeColor(TendrilEdgeColor);
	MyViewExtension->SetNoiseStrength(NoiseStrength);
	MyViewExtension->SetNoiseSize(NoiseSize);
	MyViewExtension->SetDebugLines(DebugLines);
	MyViewExtension->SetNoiseTexture(NoiseTex);
	MyViewExtension->SetMovementSpeed(NoiseMovementSpeed);
	MyViewExtension->SetTime(GetWorld()->GetTimeSeconds());
	MyViewExtension->SetFogParameters(FogNoiseTex, FogFar, FogDensity, FogMovementSpeed, FogNoiseScale, FogColor, FogSmokeColor);
}

