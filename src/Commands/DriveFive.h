#ifndef DriveFive_H
#define DriveFive_H

#include "../CommandBase.h"
#include "Utilities/WVPIDController.h"

class DriveFive : public CommandBase {
public:
	DriveFive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	WVPIDController* drivePID;
	double currentDistance;
	double currentPower;
};

#endif  // DriveFive_H
