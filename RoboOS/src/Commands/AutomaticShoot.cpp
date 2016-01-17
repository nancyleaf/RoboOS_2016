#include "AutomaticShoot.h"
bool autoshot
AutomaticShoot::AutomaticShoot()
{
	Requires(navx);
	Requires(drive);
	Requires(rangefinder);
	Requires(catapult);
}
void AutomaticShoot::Initialize()
{
	Robot::navx->FusedHeading();
	if(FusedHeading >= 180){
		Robot::drive->SetLeftValue(1);
		Robot::drive->SetRightValue(-1);
		else if(FusedHeading <= 180){
		Robot::drive->SetLeftValue(-1);
		Robot::drive->SetRightValue(1);
		}
		while(FusedHeading != 330){}
		Robot::SetLeftValue(0);
		Robot::SetRightValue(0);
		Robot::drive->SetDistance();
		Robot::drive->SetLeftValue(Robot::rangefinder->GetDistance());
		Robot::drive->SetRightValue(Robot::rangefinder->GetDistance());
	}
	Robot::rangefinder->GetDistance();
	if(GetDistance < 1){
		Robot::drive->SetLeftValue(1);
		Robot::drive->SetRightValue(1);
		else if(GetDistance > 1){
			Robot::drive->SetLeftValue(-1);
			Robot::drive->SetRightValue(-1);
		}
		Robot::drive->SetDistance();
		Robot::drive->SetLeftValue(Robot::rangefinder->GetDistance());
		Robot::drive->SetRightValue(Robot::rangefinder->GetDistance());
	}
		Robot::catapult->Shoot();
	autoshot = true;
}
}
void AutomaticShoot::Execute();
{

}
bool AutomaticShoot::IsFinished();
{
	return autoshot;
}
void AutomaticShoot::End();
{

}
void AutomaticShoot::Interrupted();
{

}
