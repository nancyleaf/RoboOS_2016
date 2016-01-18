#include "WPILib.h"
#include "BallPickup.h"
#include "../RobotMap.h"

BallPickup::BallPickup() : Subsystem("BallPickup"){
	IsActiveVar = true;
    retractorMotor = RobotMap::ballPickupRetractorMotor;
    pickupMotor = RobotMap::ballPickupPickupMotor;
}

void BallPickup::InitDefaultCommand(){

}

void BallPickup::SetKnownState(){
	retractorMotor->Set(1);
	pickupMotor->Set(1);
}

void BallPickup::ActivePickup(bool Active){
	if(Active){
		retractorMotor->Set(1);
		pickupMotor->Set(1);
		IsActiveVar = true;
	}else{
		retractorMotor->Set(-1);
		pickupMotor->Set(0);
		IsActiveVar = false;
	}
}

bool BallPickup::IsActive(){
	return IsActiveVar;
}
