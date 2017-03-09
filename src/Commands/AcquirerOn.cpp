#include "AcquirerOn.h"
#include "Utilities/NetworkTablesInterface.h"

AcquirerOn::AcquirerOn(bool on) {
	Requires(acquirer);
	mOn = on;
	Initialize();
	finished = false;
}

void AcquirerOn::Initialize() {
	SetTimeout(3);
	finished = false;
}

void AcquirerOn::Execute() {
	if(mOn)
		acquirer->setSpeed(1000);
	else
		acquirer->setSpeed(0);
	finished = true;

}

bool AcquirerOn::IsFinished() {
	return finished || IsTimedOut();
}

void AcquirerOn::End() {

}

void AcquirerOn::Interrupted() {
	End();
}
