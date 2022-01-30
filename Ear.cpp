#include "Ear.h"

Ear::Ear(Brain* brain) : BodyPart(brain) {}

void Ear::hearSomething()
{
	cout << "Enter what you hear (try to type \"cool\" or \"stupid\"): ";
	getline(cin, sounds);

	changed();
}

string Ear::getSounds()
{
	return sounds;
}