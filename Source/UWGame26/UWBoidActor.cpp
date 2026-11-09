// Fill out your copyright notice in the Description page of Project Settings.


#include "UWBoidActor.h"

AUWBoidActor::AUWBoidActor()
{
	PrimaryActorTick.bCanEverTick = false;

    BoidComponent = CreateDefaultSubobject<UUWBoidComponent>(TEXT("BoidComponent"));
}
