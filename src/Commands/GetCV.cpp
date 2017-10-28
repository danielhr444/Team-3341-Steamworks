#include "GetCV.h"
#include "Utilities/NetworkTablesInterface.h"

GetCV::GetCV(double* distance, double* azimuth) {
	mDistance = distance;
	mAzimuth = azimuth;
	Initialize();
}

void GetCV::Initialize() {
	finished = false;

	// Give temporary values in case CV cannot see anything
	*mDistance = 32;
	*mAzimuth = 0;

	// Set 3 second timeout, in case CV doesn't see
	SetTimeout(3);
}

void GetCV::Execute() {
	if (NetworkTablesInterface::gearFound()) { // Wait Until Gear is Found
		*mDistance = NetworkTablesInterface::getGearDistance() * 39.3701; // Convert meters to inches
		*mAzimuth = -NetworkTablesInterface::getGearAzimuth();

		std::cout << "CV Distance:\t" << *mDistance << std::endl;
		std::cout << "CV Azimuth:\t" << *mAzimuth << std::endl;

		finished = true;
	}
}

bool GetCV::IsFinished() {
	return finished || IsTimedOut();
}

void GetCV::End() {

}

void GetCV::Interrupted() {
	End();
}
