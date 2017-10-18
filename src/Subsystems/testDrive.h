#ifndef testDrive_H
#define testDrive_H

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include "CANTalon.h"
//why doesn't it find this include statement?

class testDrive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* leftMotor;
	TalonSRX* rightMotor;

public:
	testDrive();
	void InitDefaultCommand();
};

#endif  // testDrive_H
