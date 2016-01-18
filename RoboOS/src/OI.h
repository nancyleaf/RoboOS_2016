#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI{
private:
	std::shared_ptr<Joystick> xbox2;
	std::shared_ptr<Joystick> xbox1;
	std::shared_ptr<JoystickButton> aButton;
	std::shared_ptr<JoystickButton> bButton;
	std::shared_ptr<JoystickButton> yButton;
	std::shared_ptr<JoystickButton> xButton;
	std::shared_ptr<JoystickButton> leftBumper;
	std::shared_ptr<JoystickButton> rightBumper;
public:
	OI();
	std::shared_ptr<Joystick> getXbox1();
	std::shared_ptr<Joystick> getXbox2();
};
#endif
