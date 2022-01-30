#include "Leg.h"

Leg::Leg(Brain* brain) : BodyPart(brain) {}


void Leg::kick()
{
	cout << "LEG: Just kicked offender in front of you...\n";
}

void Leg::stepBack()
{
	cout << "LEG: Stepping back...\n";
}

void Leg::stepForward()
{
	cout << "LEG: Stepping forward...\n";
}
