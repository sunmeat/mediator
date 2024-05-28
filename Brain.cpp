#include "Brain.h"

#include "Ear.h"
#include "Eye.h"
#include "Face.h"
#include "Hand.h"
#include "Leg.h"

Brain::Brain()
{
	createBodyParts();
}

void Brain::createBodyParts()
{
	ear = new Ear(this);
	eye = new Eye(this);
	face = new Face(this);
	hand = new Hand(this);
	leg = new Leg(this);
}

void Brain::somethingHappenedToBodyPart(BodyPart* bodyPart)
{
	// I'm so sorry, Barbara Liskov ;)
	if (dynamic_cast<Ear*>(bodyPart) != nullptr)
	{
		string heardSounds = ((Ear*)bodyPart)->getSounds();

		if (heardSounds.find("stupid") != std::string::npos)
		{
			// attacking offender
			leg->stepForward();
			hand->hitPersonNearYou();
			leg->kick();
		}
		else if (heardSounds.find("cool") != std::string::npos)
		{
			face->smile();
		}
		else
		{
			cout << "OK, I give you another try\n";
		}
	}
	else if (dynamic_cast<Eye*>(bodyPart) != nullptr)
	{
		cout << "brain can analyze what you see and can react appropriately using different body parts\n";
	}
	else if (dynamic_cast<Hand*>(bodyPart) != nullptr)
	{
		Hand* h = (Hand*)bodyPart;

		if (hand->doesItHurt())
		{
			leg->stepBack();
		}
		else if (hand->isItNice()) {
			leg->stepForward();
			hand->embrace();
		}
		else
		{
			cout << "OK, you can touch this :)\n";
		}
	}
	else if (dynamic_cast<Leg*>(bodyPart) != nullptr)
	{
		cout << "leg can also feel something if you would like it to\n";
	}
}
