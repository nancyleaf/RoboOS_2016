#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

#include "Commands/Autonamus.h"
#include "Subsystems/Catapult.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/NavX.h"
#include "Subsystems/PickupArm.h"
#include "Subsystems/RangeFinder.h"
#include "Subsystems/VisionTargeting.h"

#include "OI.h"

class Robot : public IterativeRobot {
public:
	std::unique_ptr<Command> autonomousCommand;
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();
	static std::shared_ptr<VisionTargeting> visionTargeting;
    static std::shared_ptr<Drivetrain> drivetrain;
    static std::shared_ptr<Catapult> catapult;
    static std::shared_ptr<PickupArm> pickupArm;
    static std::shared_ptr<RangeFinder> rangeFinder;
    static std::shared_ptr<NavX> navX;
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};
#endif
