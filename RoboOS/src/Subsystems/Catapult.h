#ifndef CATAPULT_H
#define CATAPULT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Catapult: public Subsystem {
private:
	int CountHolder;
	std::shared_ptr<DoubleSolenoid> catapultSolenoid;
public:
	Catapult();
	void InitDefaultCommand();
	void SetKnownState();
	void Shoot();
};
#endif
