#include "PickupRaise.h"
bool PickedUp;

PickupRaise::PickupRaise()
{
	Requires(ballpickup);
}

// Called just before this Command runs the first time
void PickupRaise::Initialize()
{
	Robot::ballpickup->PickUp();
	PickedUp = true;
}
// Called repeatedly when this Command is scheduled to run
void PickupRaise::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool PickupRaise::IsFinished()
{
	return PickedUp;
}

// Called once after isFinished returns true
void PickupRaise::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PickupRaise::Interrupted()
{

}
