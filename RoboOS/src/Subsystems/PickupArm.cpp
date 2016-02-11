#include "PickupArm.h"
#include "../RobotMap.h"
#include "Commands/ShootController.h"

PickupArm::PickupArm() : Subsystem("PickupArm") {
	currentMode = 1;
	flipperSolenoid = RobotMap::pickupArmFlipperSolenoid;
    retractorMotor1 = RobotMap::pickupArmRetractorMotor1;
    retractorMotor2 = RobotMap::pickupArmRetractorMotor2;
    pickupMotor = RobotMap::pickupArmPickupMotor;
    pickupArmBallDetector = RobotMap::pickupArmPickupArmBallDetector;
}

void PickupArm::InitDefaultCommand() {
	SetDefaultCommand(new ShootController());
}

void PickupArm::MaintainPickupArm() {
	retractorMotor2->SetControlMode(CANSpeedController::kFollower);
	retractorMotor2->Set(16);
	retractorMotor1->SetFeedbackDevice(CANTalon::FeedbackDevice::QuadEncoder);
	retractorMotor1->ConfigEncoderCodesPerRev(4095);
	retractorMotor1->SetSensorDirection(false);
	retractorMotor1->SelectProfileSlot(0);
	retractorMotor1->SetVoltageRampRate(0);
	retractorMotor1->SetP(2);
	retractorMotor1->SetI(0);
	retractorMotor1->SetD(0);
	retractorMotor1->SetF(0);
	retractorMotor1->SelectProfileSlot(0);
	retractorMotor1->ConfigNominalOutputVoltage(0,-0);
	retractorMotor1->ConfigPeakOutputVoltage(12,-12);
	retractorMotor1->SetAllowableClosedLoopErr(0);
	retractorMotor1->SetControlMode(CANSpeedController::kPosition);
	retractorMotor1->SetPosition(0);
	retractorMotor1->Set(0 * 11.38);
	pickupMotor->Set(0);
	currentMode = 1;
}

void PickupArm::SetCurrentMode(int Mode) {
	currentMode = Mode;
	if(Mode == 1){//Storage Mode
		retractorMotor1->Set(0);
		pickupMotor->Set(0);
	}else if(Mode == 2){//Shoot Mode
		retractorMotor1->Set(.25);
		pickupMotor->Set(0);
	}else if(Mode == 3){//Hunt Mode
		retractorMotor1->Set(.5);
		pickupMotor->Set(0);
	}else if(Mode == 4){//Pickup Mode
		retractorMotor1->Set(.75);
		pickupMotor->Set(1);
	}else if(Mode == 5){//Roam Mode
			retractorMotor1->Set(.8);
			pickupMotor->Set(1);
	}else{}
}

int PickupArm::GetCurrentMode() {
	return currentMode;
}

bool PickupArm::BallDetected(){
	return pickupArmBallDetector->GetVoltage() > 1;
}

void PickupArm::SetFlippers(bool Extended){
	if(Extended){
		flipperSolenoid->Set(DoubleSolenoid::kForward);
	}else{
		flipperSolenoid->Set(DoubleSolenoid::kReverse);
	}
}

int PickupArm::GetArmAngle(){
	return retractorMotor1->GetEncPosition();
}







