#ifndef Catapult_H
#define Catapult_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Catapult: public Subsystem
{
private:
	DoubleSolenoid *CatapultSolenoid;
	AnalogInput *CatapultCheckBall;
	Timer *ShotCounter;
public:
	Catapult();
	void InitDefaultCommand();
	void Catapult::Shoot();
	bool Catapult::Checkball();
};

#endif
