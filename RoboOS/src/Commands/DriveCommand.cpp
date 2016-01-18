#include "DriveCommand.h"
#include "oi.h"

DriveCommand::DriveCommand(){
	Requires(Robot::drivetrain.get());
}

void DriveCommand::Initialize(){
	Robot::drivetrain->SetPercentMode();
	Robot::drivetrain->SetVoltageRamp();
}

void DriveCommand::Execute(){
	Robot::drivetrain->SetDriveValues(Robot::oi->getXbox1()->GetRawAxis(1), Robot::oi->getXbox1()->GetRawAxis(1));
}

bool DriveCommand::IsFinished(){
	return false;
}

void DriveCommand::End(){

}

void DriveCommand::Interrupted(){

}
