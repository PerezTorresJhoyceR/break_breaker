// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paleta.generated.h"

UCLASS()
class BRIKSBREAKER_API APaleta : public APawn
{
	GENERATED_BODY()
private:
	char color;
	float tamaño;
	float velocidad;
	move;
	/// algunos de los metodos que tendrá la paleta sera moverse , transformarse 


public:
	// Sets default values for this pawn's properties
	APaleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
