#include "BallPickup.h"
#include "../RobotMap.h"
bool HoldingBall = false;

CANTalon *PickUpMotor = 0;
CANTalon *RetractMotor = 0;



BallPickup::BallPickup() : Subsystem("ExampleSubsystem")
{
	PickUpMotor = new CANTalon();
	RetractMotor = new CANTalon();
}

void BallPickup::PickUp(bool Active){

if(Active){
	PickUpMotor->Set(1);
}
else {
	PickUpMotor->Set(0);
}

}

void Retract () {
	if(HoldingBall == false) {
		RetractMotor->Set(0);
	}
	else {
		RetractMotor->Set(1);
	}
}




void BallPickup::InitDefaultCommand()
{

}
