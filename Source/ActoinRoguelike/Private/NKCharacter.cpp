// Fill out your copyright notice in the Description page of Project Settings.


#include "NKCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ANKCharacter::ANKCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//弹簧臂组件
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	//确保弹簧臂连接到摄像机，RootComponent是第一个组件
	SpringArmComp->SetupAttachment(RootComponent);

	//摄像机组件
	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	//弹簧臂组件有碰撞检查，减小摄像机与弹簧臂的距离
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void ANKCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANKCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

