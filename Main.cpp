#include <iostream>
using namespace std;

#include "Brain.h"
#include "BodyPart.h"
#include "Ear.h"
#include "Eye.h"
#include "Face.h"
#include "Hand.h"
#include "Leg.h"

// http://cpp-reference.ru/patterns/behavioral-patterns/mediator/

int main()
{
	system("title Mediator Pattern Example");

	Brain* human = new Brain();

	string line = "start";

	while (line != "")
	{
		cout << "Enter body part ('ear','eye','hand' or empty to exit): ";
		getline(cin, line);

		if (line == "ear" || line == "Ear")
		{
			human->ear->hearSomething();
		}
		else if (line == "Eye" || line == "eye")
		{
			human->eye->seeSomething();
		}
		else if (line == "Hand" || line == "hand")
		{
			human->hand->feelSomething();
		}
		// ...
	}
}