#pragma once
#include "AbsFeature.h"
#include "../Genetic/State.h"

class BadFeature2 : public AbsFeature
{
public:
	double calculateFeature(State s);
};

