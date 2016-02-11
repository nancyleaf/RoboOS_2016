#include "Commands/DriveController.h"
#include "Drivetrain.h"
#include "../RobotMap.h"

Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
    rightFront = RobotMap::drivetrainRightFront;
    rightMiddle = RobotMap::drivetrainRightMiddle;
    rightBack = RobotMap::drivetrainRightBack;
    leftFront = RobotMap::drivetrainLeftFront;
    leftMiddle = RobotMap::drivetrainLeftMiddle;
    leftBack = RobotMap::drivetrainLeftBack;
}

void Drivetrain::InitDefaultCommand() {
    SetDefaultCommand(new DriveController());
}

void Drivetrain::MaintainMotors() {
	rightMiddle->SetControlMode(CANSpeedController::kFollower);
	rightMiddle->Set(10);
	rightBack->SetControlMode(CANSpeedController::kFollower);
	rightBack->Set(10);
	leftMiddle->SetControlMode(CANSpeedController::kFollower);
	leftMiddle->Set(13);
	leftBack->SetControlMode(CANSpeedController::kFollower);
	leftBack->Set(13);
	rightFront->SetControlMode(CANSpeedController::kPercentVbus);
	leftFront->SetControlMode(CANSpeedController::kPercentVbus);
}

void Drivetrain::SetDriveValues(float Left, float Right) {
	rightFront->Set(Right * -1);
	leftFront->Set(Left);
}

void Drivetrain::SetMode(CANSpeedController::ControlMode ControlMode) {
	rightFront->SetControlMode(ControlMode);
	leftFront->SetControlMode(ControlMode);
}
