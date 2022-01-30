#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Brain.h"
#include "BodyPart.h"

class Eye : public BodyPart
{
	string thingsAround;
public:
	Eye(Brain* brain);
	void seeSomething();
};