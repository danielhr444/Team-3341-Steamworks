#include "AcquirerOn.h"
#include "Utilities/NetworkTablesInterface.h"

AcquirerOn::AcquirerOn(bool on) {
	Requires(acquirer);
	mOn = on;
	Initialize();
	finished = false;
}

void AcquirerOn::Initialize() {
	//SetTimeout(3);
	//finished = false;
}

void AcquirerOn::Execute() {
	if(mOn)
		acquirer->setSpeed(1);
	else
		finished = true;

}

bool AcquirerOn::IsFinished() {
	//return IsTimedOut();
	return false;
}

void AcquirerOn::End() {
	acquirer->setSpeed(0);
}

void AcquirerOn::Interrupted() {
	End();
}
