#include "DriveCommand.h"

DriveCommand::DriveCommand(){
	Requires(drive);
}

// Called just before this Command runs the first time
void DriveCommand::Initialize(){

}

// Called repeatedly when this Command is scheduled to run
void DriveCommand::Execute(){
	if(Robot::Direction == Forward){
		Robot::drive->SetLeftValue(Robot::oi->GetStickYAxis(1,1));
		Robot::drive->SetRightValue(Robot::oi->GetStickYAxis(2,2));
	}
	if(Robot::Direction == Back){
		Robot::drive->SetLeftValue(-1 * Robot::oi->GetStickYAxis(1,1));
		Robot::drive->SetRightValue(-1 * Robot::oi->GetStickYAxis(2,2));
	}
}
// Make this return true when this Command no longer needs to run execute()
bool DriveCommand::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void DriveCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveCommand::Interrupted(){

}
