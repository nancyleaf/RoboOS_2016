#include "ChangeControlMode.h"
bool ChangeCntrlMode
ChangeControlMode::ChangeControlMode()
{

}

// Called just before this Command runs the first time
void ChangeControlMode::Initialize()
{
	if(Robot::Direction == forward){
		Robot::Direction == back
	}
	if(Robot::Direction == back){
		Robot::Direction == forward
	}
	ChangeCntrlMode = true
}

// Called repeatedly when this Command is scheduled to run
void ChangeControlMode::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ChangeControlMode::IsFinished()
{
	return ChangeCntrlMode;
}

// Called once after isFinished returns true
void ChangeControlMode::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChangeControlMode::Interrupted()
{

}
