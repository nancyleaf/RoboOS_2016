#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmClimb.h"
#include "Commands/AutoShootLeft.h"
#include "Commands/AutoShootMiddle.h"
#include "Commands/AutoShootRight.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ManualShoot.h"
#include "Commands/TogglePickup.h"

OI::OI() {
    xbox2.reset(new Joystick(1));
    xbox1.reset(new Joystick(0));
    
    aButton.reset(new JoystickButton(xbox1.get(), 1));
    aButton->WhenPressed(new AutoShootMiddle());

    bButton.reset(new JoystickButton(xbox1.get(), 1));
    bButton->WhenPressed(new AutoShootRight());

    yButton.reset(new JoystickButton(xbox1.get(), 1));
    yButton->WhenPressed(new ArmClimb());

    xButton.reset(new JoystickButton(xbox1.get(), 1));
    xButton->WhenPressed(new AutoShootLeft());

    leftBumper.reset(new JoystickButton(xbox1.get(), 1));
    leftBumper->WhenPressed(new TogglePickup());

    rightBumper.reset(new JoystickButton(xbox1.get(), 1));
    rightBumper->WhenPressed(new ManualShoot());
}

std::shared_ptr<Joystick> OI::getXbox1() {
   return xbox1;
}

std::shared_ptr<Joystick> OI::getXbox2() {
   return xbox2;
}
