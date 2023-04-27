#include "AddonTaskExecuter.h"

double AddonTaskExecuter::beginOffset(double endspeed, treenode item)
{
	if (xOnly)
	{
		offsetloc[1] = 0;
		offsetloc[2] = 0;
	}
	return 0.0;
}
void AddonTaskExecuter::bindVariables()
{
	__super::bindVariables();
	bindVariable(xOnly);
}