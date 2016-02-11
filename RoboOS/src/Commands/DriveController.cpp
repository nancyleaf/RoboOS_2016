#include "DriveController.h"

DriveController::DriveController(): Command() {
	Requires(Robot::drivetrain.get());
}

void DriveController::Initialize() {
	Robot::drivetrain->SetMode(CANSpeedController::kPercentVbus);
}

void DriveController::Execute() {
	if(Robot::pickupArm->GetCurrentMode() == 3){
		if(Robot::oi->getXbox1()->GetRawButton(5)){
			Robot::drivetrain->SetDriveValues(1,1);
		}else if(Robot::oi->getXbox1()->GetRawButton(6)){
			Robot::drivetrain->SetDriveValues(-1,-1);
		}else{
			Robot::drivetrain->SetDriveValues(Robot::oi->getXbox1()->GetRawAxis(1),Robot::oi->getXbox1()->GetRawAxis(5));
		}
	}else{
		if(Robot::oi->getXbox1()->GetRawButton(5)){
			Robot::drivetrain->SetDriveValues(-1,-1);
		}else if(Robot::oi->getXbox1()->GetRawButton(6)){
			Robot::drivetrain->SetDriveValues(1,1);
		}else{
			Robot::drivetrain->SetDriveValues(Robot::oi->getXbox1()->GetRawAxis(5) * -1, Robot::oi->getXbox1()->GetRawAxis(1) * -1);
		}
	}
}

bool DriveController::IsFinished() {
    return false;
}

void DriveController::End() {
	Robot::drivetrain->SetMode(CANSpeedController::kPercentVbus);
}

void DriveController::Interrupted() {
	Robot::drivetrain->SetMode(CANSpeedController::kPercentVbus);
}
