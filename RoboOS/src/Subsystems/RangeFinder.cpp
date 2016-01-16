#include "RangeFinder.h"
#include "../RobotMap.h"

AnalogInput *Sharp1 = 0;
AnalogInput *Sharp2 = 0;
AnalogInput *Sharp3 = 0;
double TotalDistance;

RangeFinder::RangeFinder() : Subsystem("ExampleSubsystem"){
	Sharp1 = new AnalogInput();
	Sharp2 = new AnalogInput();
	Sharp3 = new AnalogInput();
}

double GetDistance() {
		return (Sharp1 + Sharp2 + Sharp3)/3 = TotalDistance;
}

void RangeFinder::InitDefaultCommand(){

}

