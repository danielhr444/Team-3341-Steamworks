#include "Acquirer.h"
#include "../RobotMap.h"
using namespace frc;

Acquirer::Acquirer() : Subsystem("Acquirer") {
	acquirer = new CANTalon(ACQUIRER);
//	acquirer->SetControlMode(CANSpeedController::kPercentVbus);
//	acquirer->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
//	acquirer->ConfigLimitMode(CANSpeedController::kLimitMode_SrxDisableSwitchInputs);
//	 encoder = new Encoder(ACQUIRERENCODERLEFT); // ENCODER is the pin number for the encoder
}

void Acquirer::setSpeed(double speed) {
	acquirer->Set(speed);
}

bool Acquirer::disable(bool button) {
	return button;
}

/*Acquirer::~Acquirer() //destructor
 {
 delete acquirer;
 //delete encoder;
 acquirer = NULL;
 // encoder = NULL;
 } */

// Put methods for controlling this subsystem
// here. Call these from Commands.
