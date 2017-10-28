#ifndef AcquirerOn_H
#define AcquirerOn_H

#include "CommandBase.h"
#include "Utilities/NetworkTablesInterface.h"
#include "WPILib.h"

//#include ""

class AcquirerOn: public CommandBase {
public:
	AcquirerOn(bool on);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool mOn, finished;
};

#endif
