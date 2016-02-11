#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	bool beenPressed;
	std::shared_ptr<Joystick> xbox1;
	std::shared_ptr<JoystickButton> selectButton;
	std::shared_ptr<JoystickButton> aButton;
	std::shared_ptr<JoystickButton> bButton;
	std::shared_ptr<JoystickButton> yButton;
	std::shared_ptr<JoystickButton> xButton;
public:
	OI();
	std::shared_ptr<Joystick> getXbox1();

};
#endif
