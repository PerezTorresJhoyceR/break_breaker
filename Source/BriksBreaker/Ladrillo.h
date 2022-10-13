// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class BRIKSBREAKER_API ALadrillo : public AActor
{
	GENERATED_BODY()
private:
	int tamaño;
	char color;
	char forma;
	reducirvida = -1;

public:	
	// Sets default values for this actor's properties
	ALadrillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
