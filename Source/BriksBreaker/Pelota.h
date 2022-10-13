y me// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pelota.generated.h"

UCLASS()
class BRIKSBREAKER_API APelota : public AActor
{
	GENERATED_BODY()
private:
	char color;
	char forma;
	float tamaño;
	float velocidad;
	float trayectoria;
	float peso;
	int multiplicarse;
	crecer = 2;
	
public:	
	// Sets default values for this actor's properties
	APelota();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
