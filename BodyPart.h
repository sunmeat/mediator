#pragma once
#include "Brain.h"

// sbstract base collegue
class BodyPart abstract
{
protected:
	Brain* brain; // body part knows about brain (mediator)

public:
	BodyPart(Brain* brain);
	virtual void changed();
};