#include "WPILib.h"
#include "RangeFinder.h"
#include "../RobotMap.h"

RangeFinder::RangeFinder() : Subsystem("RangeFinder") {
    sharpSensor1 = RobotMap::rangeFinderSharpSensor1;
    sharpSensor2 = RobotMap::rangeFinderSharpSensor2;
    sharpSensor3 = RobotMap::rangeFinderSharpSensor3;
}

void RangeFinder::InitDefaultCommand() {

}

int RangeFinder::GetDistance(){
	return (sharpSensor1->GetVoltage() + sharpSensor2->GetVoltage() + sharpSensor2->GetVoltage()) / 3;
}
