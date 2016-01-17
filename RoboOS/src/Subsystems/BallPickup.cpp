#include "BallPickup.h"
#include "WPILib.h"
#include "../RobotMap.h"

CANTalon *PickUpMotor = 0;
CANTalon *RetractMotor = 0;

BallPickup::BallPickup() : Subsystem("Ballpickup"){
	PickUpMotor = new CANTalon(BallPickupMotorModule);
	RetractMotor = new CANTalon(BallPickupRetractiorModule);
}

void BallPickup::InitDefaultCommand(){

}

void BallPickup::InitMotors(){
	RetractMotor->SetControlMode(CANSpeedController::kPosition);
}

void BallPickup::PickUp(bool Active){
	if(Active){
		PickUpMotor->Set(1);
	}else{
		PickUpMotor->Set(0);
	}
}

void BallPickup::Retract(bool Active) {
	if(Active == false){
		RetractMotor->Set(1);
	}else{
		RetractMotor->Set(0);
	}
}
