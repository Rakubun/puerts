// Fill out your copyright notice in the Description page of Project Settings.


#include "GenDTSCommandlet.h"
#include "IDeclarationGenerator.h"

UGenDTSCommandlet::UGenDTSCommandlet()
{
}

UGenDTSCommandlet::~UGenDTSCommandlet()
{
}

int32 UGenDTSCommandlet::Main(const FString& Params)
{
    FDeclarationGenerator* GenDTSModule = FModuleManager::LoadModulePtr<FDeclarationGenerator>("DeclarationGenerator");
    if (GenDTSModule != nullptr)
    {
        GenDTSModule->LoadAllWidgetBlueprint();
        GenDTSModule->GenTypeScriptDeclaration();
        GenDTSModule->GenReactDeclaration();
    }

    return 0;
}
