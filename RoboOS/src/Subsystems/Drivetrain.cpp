#include "WPILib.h"
#include "Drivetrain.h"
#include "../RobotMap.h"
#include "Commands/DriveCommand.h"

Drivetrain::Drivetrain() : Subsystem("Drivetrain"){
    rightMotor1 = RobotMap::drivetrainRightMotor1;
    rightMotor2 = RobotMap::drivetrainRightMotor2;
    rightMotor3 = RobotMap::drivetrainRightMotor3;
    leftMotor1 = RobotMap::drivetrainLeftMotor1;
    leftMotor2 = RobotMap::drivetrainLeftMotor2;
    leftMotor3 = RobotMap::drivetrainLeftMotor3;
}

void Drivetrain::InitDefaultCommand(){
	SetDefaultCommand(new DriveCommand);
}

void Drivetrain::SetKnownState(){
	leftMotor1->SetControlMode(CANSpeedController::kPercentVbus);
	leftMotor1->Set(0);
	rightMotor1->SetControlMode(CANSpeedController::kPercentVbus);
	rightMotor1->Set(0);
	rightMotor2->SetControlMode(CANSpeedController::kFollower);
	rightMotor2->Set(1);
	rightMotor3->SetControlMode(CANSpeedController::kFollower);
	rightMotor3->Set(1);
	leftMotor2->SetControlMode(CANSpeedController::kFollower);
	leftMotor2->Set(1);
	leftMotor3->SetControlMode(CANSpeedController::kFollower);
	leftMotor3->Set(1);
}

void Drivetrain::SetDriveValues(float Left, float Right){
	if(Left == NULL){
		rightMotor1->Set(Right);
	}else if(Right == NULL){
		leftMotor1->Set(Left);
	}else{
		rightMotor1->Set(Right);
		leftMotor1->Set(Left);
	}
}

void Drivetrain::SetSpeedMode(){
	rightMotor1->SetControlMode(CANSpeedController::kSpeed);
	leftMotor1->SetControlMode(CANSpeedController::kSpeed);
}
void Drivetrain::SetPositionMode(){
	rightMotor1->SetControlMode(CANSpeedController::kPosition);
	leftMotor1->SetControlMode(CANSpeedController::kPosition);
}
void Drivetrain::SetVoltageMode(){
	rightMotor1->SetControlMode(CANSpeedController::kVoltage);
	leftMotor1->SetControlMode(CANSpeedController::kVoltage);
}
void Drivetrain::SetPercentMode(){
	rightMotor1->SetControlMode(CANSpeedController::kPercentVbus);
	leftMotor1->SetControlMode(CANSpeedController::kPercentVbus);
}
void Drivetrain::SetCurrentMode(){
	rightMotor1->SetControlMode(CANSpeedController::kCurrent);
	leftMotor1->SetControlMode(CANSpeedController::kCurrent);
}

void Drivetrain::SetVoltageRamp(){
	rightMotor1->SetVoltageRampRate(1);
	rightMotor2->SetVoltageRampRate(1);
	rightMotor3->SetVoltageRampRate(1);
	leftMotor1->SetVoltageRampRate(1);
	leftMotor2->SetVoltageRampRate(1);
	leftMotor3->SetVoltageRampRate(1);
}
