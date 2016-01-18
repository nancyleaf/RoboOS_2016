#include "Robot.h"

std::shared_ptr<Catapult> Robot::catapult;
std::shared_ptr<Drivetrain> Robot::drivetrain;
std::shared_ptr<NavX> Robot::navX;
std::shared_ptr<RangeFinder> Robot::rangeFinder;
std::shared_ptr<BallPickup> Robot::ballPickup;
std::unique_ptr<OI> Robot::oi;

void Robot::RobotInit(){
	RobotMap::init();
    catapult.reset(new Catapult());
    drivetrain.reset(new Drivetrain());
    navX.reset(new NavX());
    rangeFinder.reset(new RangeFinder());
    ballPickup.reset(new BallPickup());
	/* This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.*/
	oi.reset(new OI());
	autonomousCommand.reset(new AutonomousCommand());
}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic(){
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit(){
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic(){
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit(){
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic(){
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic(){
	lw->Run();
}

START_ROBOT_CLASS(Robot);
