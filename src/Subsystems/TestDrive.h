#ifndef TestDrive_H
#define TestDrive_H

#include <Commands/Subsystem.h>
#include "WPILib.h"
#include "ctrlib/CanTalonSRX.h"

class TestDrive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CanTalonSRX* leftMotor;
	CanTalonSRX* rightMotor;
	Encoder* leftEncoder;
	Encoder* rightEncoder;

public:
	TestDrive();
	void InitDefaultCommand();
};

#endif  // TestDrive_H
