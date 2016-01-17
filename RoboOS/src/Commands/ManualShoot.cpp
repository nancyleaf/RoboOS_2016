#include "ManualShoot.h"

bool shot;

ManualShoot::ManualShoot()
{
	Requires(catapult);
}

// Called just before this Command runs the first time
void ManualShoot::Initialize()
{
	Robot::catapult->Shoot();
	shot = true;
}
// Called repeatedly when this Command is scheduled to run
void ManualShoot::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ManualShoot::IsFinished()
{
	return shot;
}

// Called once after isFinished returns true
void ManualShoot::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ManualShoot::Interrupted()
{

}
