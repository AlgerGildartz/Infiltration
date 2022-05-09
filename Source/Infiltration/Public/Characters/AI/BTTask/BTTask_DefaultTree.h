// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Characters/AI/AICGoblin.h"
#include "BTTask_DefaultTree.generated.h"

UCLASS()
class INFILTRATION_API UBTTask_DefaultTree : public UBTTaskNode
{
	GENERATED_BODY()

	UPROPERTY()
	AAICGoblin* AICon;
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory) override;
};
