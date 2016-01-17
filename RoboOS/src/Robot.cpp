#include "Robot.h"

BallPickup *Robot::ballpickup = 0;
Catapult *Robot::catapult = 0;
Drive *Robot::drive = 0;
NavX *Robot::navx = 0;
RangeFinder *Robot::rangefinder = 0;
OI *Robot::oi = 0;

void Robot::RobotInit() {
	RobotMap::init();
	ballpickup = new BallPickup();
	catapult = new Catapult();
	drive = new Drive();
	navx = new NavX();
	rangefinder = new RangeFinder();
	/* This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.*/
	oi = new OI();
	lw = LiveWindow::GetInstance();
	autonomousCommand = new AutonomousCommand();
}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {
	if (autonomousCommand != NULL)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	/* This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to 
	// continue until interrupted by another command, remove
	// these lines or comment it out.*/
	if (autonomousCommand != NULL)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

