#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	const int BallPickupMotorModule = 1;
	const int BallPickupRetractiorModule = 1;
	const int CatapultSolenoidModule = 1;
	const int CapapultBallChecker = 1;
	const int RightDriveMotor = 1;

	static void init();
};
#endif
