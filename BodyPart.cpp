#include "BodyPart.h"

BodyPart::BodyPart(Brain* brain)
{
	this->brain = brain;
}

void BodyPart::changed()
{
	brain->somethingHappenedToBodyPart(this);
}