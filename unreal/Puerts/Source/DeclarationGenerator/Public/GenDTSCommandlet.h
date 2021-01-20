// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"

#include "GenDTSCommandlet.generated.h"

UCLASS()
class UGenDTSCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UGenDTSCommandlet();
	~UGenDTSCommandlet();

public:
    virtual int32 Main(const FString& Params) override;
};
