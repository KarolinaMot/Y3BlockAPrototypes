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
	FLinearColor PassColor;

	TSharedPtr<class FMyViewExtension, ESPMode::ThreadSafe> MyViewExtension;
	
};
