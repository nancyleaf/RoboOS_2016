#include "RangeFinder.h"
#include "../RobotMap.h"

RangeFinder::RangeFinder() : Subsystem("RangeFinder") {
    rangeFinderUltrasonic = RobotMap::rangeFinderRangeFinderUltrasonic;
}

void RangeFinder::InitDefaultCommand() {

}

void RangeFinder::MaintainRangeFinder() {
	rangeFinderUltrasonic->SetAutomaticMode(true);
}

double RangeFinder::GetDistance() {
	return rangeFinderUltrasonic->GetRangeInches();
}


