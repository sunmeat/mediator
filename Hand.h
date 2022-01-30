#pragma once
#include <iostream>
using namespace std;

#include "Brain.h"
#include "BodyPart.h"

class Hand : public BodyPart
{
	bool isSoft;
	bool isHurting;

public:
	Hand(Brain* brain);
	void feelSomething();
	void hitPersonNearYou();
	void embrace();
	bool doesItHurt();
	bool isItNice();
};
