#pragma once
#include <iostream>
using namespace std;

#include "Brain.h"
#include "BodyPart.h"

class Leg : public BodyPart
{
public:
	Leg(Brain* brain);
	void kick();
	void stepBack();
	void stepForward();
};