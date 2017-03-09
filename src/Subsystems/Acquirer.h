#ifndef Acquirer_H
#define Acquirer_H
#include <WPILib.h>
#include "Commands/Subsystem.h"
#include "Encoder.h"
#include "CANTalon.h"
using namespace frc;
//using namespace
class Acquirer: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* acquirer;
public:
	Acquirer();
	//void InitDefaultCommand();
	void setSpeed(double speed);
	bool disable(bool button);
};

#endif  // Acquirer_H
