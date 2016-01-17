#ifndef BallPickup_H
#define BallPickup_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallPickup: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	BallPickup();
	void InitDefaultCommand();
	void InitMotors();
	void PickUp(bool Active);
	void Retract(bool Active);
};

#endif
