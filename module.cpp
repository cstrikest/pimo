#include "module.h"
#include "AddonTaskExecuter.h"

visible ObjectDataType* createodtderivative(char* classname)
{
	if (strcmp(classname, "AddonTaskExecuter") == 0)
		return new AddonTaskExecuter;
	return NULL;
}

visible SimpleDataType* createsdtderivative(char* classname)
{
	return NULL;
}

visible void dllinitialize()
{

}

visible void dllcleanup()
{

}
