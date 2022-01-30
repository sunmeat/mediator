#include "Eye.h"

Eye::Eye(Brain* brain) : BodyPart(brain) {}

void Eye::seeSomething()
{
	cout << "Enter what you see: ";
	getline(cin, thingsAround);

	changed();
}
