// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPass.h"
#include "MyViewExtension.h"

// Sets default values
ACustomPass::ACustomPass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PassColor = FLinearColor::Green;
}

// Called when the game starts or when spawned
void ACustomPass::BeginPlay()
{
	Super::BeginPlay();
	MyViewExtension = FSceneViewExtensions::NewExtension<FMyViewExtension>(PassColor);
}

void ACustomPass::OnConstruction(const FTransform & Transform)
{
}

// Called every frame
void ACustomPass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

