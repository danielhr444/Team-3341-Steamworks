#include "CloseGate.h"

CloseGate::CloseGate() {
	Requires(shooter);
	finished = false;
}

// Called just before this Command runs the first time
void CloseGate::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void CloseGate::Execute() {
	shooter->setServo(75);
	finished = true;
}

// Make this return true when this Command no longer needs to run execute()
bool CloseGate::IsFinished() {
	return finished;
}

// Called once after isFinished returns true
void CloseGate::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CloseGate::Interrupted() {

}
