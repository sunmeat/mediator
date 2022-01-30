#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Brain.h"
#include "BodyPart.h"

class Ear : public BodyPart
{
	string sounds;
public:
	Ear(Brain* brain);
	void hearSomething();
	string getSounds();
};
