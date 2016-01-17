#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

#include "Commands/AutonomousCommand.h"

#include "Subsystems/Ballpickup.h"
#include "Subsystems/Catapult.h"
#include "Subsystems/Drive.h"
#include "Subsystems/NavX.h"
#include "Subsystems/RangeFinder.h"

#include "OI.h"

class Robot : public IterativeRobot {
public:
	Command *autonomousCommand;
	LiveWindow *lw;

	static BallPickup *ballpickup;
	static Catapult *catapult;
	static Drive *drive;
	static NavX *navx;
	static RangeFinder *rangefinder;
	static OI *oi;

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
