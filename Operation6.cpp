#include "Operation6.h"



Operation6::Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
}


Operation6::~Operation6()
{
}

bool Operation6::effectuerOperation(Dechet* dechet)
{
	if (dechet->getType == 0 || dechet->getType == 6)
		return true;
	else
		return false;
}