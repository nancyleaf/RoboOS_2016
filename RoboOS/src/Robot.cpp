#include "Robot.h"

std::shared_ptr<Drivetrain> Robot::drivetrain;
std::shared_ptr<Catapult> Robot::catapult;
std::shared_ptr<PickupArm> Robot::pickupArm;
std::shared_ptr<RangeFinder> Robot::rangeFinder;
std::shared_ptr<NavX> Robot::navX;
std::shared_ptr<VisionTargeting> Robot::visionTargeting;
std::unique_ptr<OI> Robot::oi;


void Robot::RobotInit() {
	RobotMap::init();
	visionTargeting.reset(new VisionTargeting);
    drivetrain.reset(new Drivetrain());
    catapult.reset(new Catapult());
    pickupArm.reset(new PickupArm());
    rangeFinder.reset(new RangeFinder());
    navX.reset(new NavX());
    autonomousCommand.reset(new Autonamus());
	oi.reset(new OI());
  }

void Robot::DisabledInit(){
	//RobotMap::usbCamera0->StartCapture();
	//RobotMap::usbCamera1->StartCapture();
}

void Robot::DisabledPeriodic() {
	drivetrain->MaintainMotors();
	pickupArm->MaintainPickupArm();
}

void Robot::AutonomousInit() {
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
	SmartDashboard::PutNumber("CurrentMode", pickupArm->GetCurrentMode());
	SmartDashboard::PutBoolean("Ball Ahead", pickupArm->BallDetected());
	SmartDashboard::PutBoolean("Ball Inside", catapult->BallDetected());

}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

