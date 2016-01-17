#include "RangeFinder.h"
#include "../RobotMap.h"
#include "WPILib.h"

AnalogInput *Sharp1 = 0;
AnalogInput *Sharp2 = 0;
AnalogInput *Sharp3 = 0;
double TotalDistance;

RangeFinder::RangeFinder() : Subsystem("ExampleSubsystem"){
	Sharp1 = new AnalogInput(1);
	Sharp2 = new AnalogInput(1);
	Sharp3 = new AnalogInput(1);
}

void RangeFinder::InitDefaultCommand(){

}

double GetDistance() {
		return (Sharp1 + Sharp2 + Sharp3)/3 = TotalDistance;
}


