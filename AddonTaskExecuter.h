#pragma once
#include "FlexsimDefs.h"

class AddonTaskExecuter : public TaskExecuter
{
public:
	double xOnly = 0.0;
	virtual double beginOffset(double endspeed, treenode item) override;
	virtual void bindVariables() override;
};
