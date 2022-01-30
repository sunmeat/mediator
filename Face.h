#pragma once
#include <iostream>
using namespace std;

#include "Brain.h"
#include "BodyPart.h"

class Face : public BodyPart
{
public:
	Face(Brain* brain);
	void smile();
};