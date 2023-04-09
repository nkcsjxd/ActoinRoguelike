// Fill out your copyright notice in the Description page of Project Settings.


#include "NKCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ANKCharacter::ANKCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//���ɱ����
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	//ȷ�����ɱ����ӵ��������RootComponent�ǵ�һ�����
	SpringArmComp->SetupAttachment(RootComponent);

	//��������
	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	//���ɱ��������ײ��飬��С������뵯�ɱ۵ľ���
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

