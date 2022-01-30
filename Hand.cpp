#include "Hand.h"

Hand::Hand(Brain* brain) : BodyPart(brain) {}

void Hand::feelSomething()
{
	cout << "What you feel is soft? (Yes/No) ";
	string answer;
	cin >> answer;

	if (answer != "" && answer[0] == 'Y')
	{
		isSoft = true;
	}

	cout << "What you feel is hurting? (Yes/No) ";
	cin >> answer;
	if (answer != "" && answer[0] == 'Y')
	{
		isHurting = true;
	}

	changed();
}

void Hand::hitPersonNearYou()
{
	cout << "HAND: Just hit offender...\n"; // стукнуть обидчика
}

void Hand::embrace()
{
	cout << "HAND: Embracing what is in front of you...\n"; // обнимашки
}

bool Hand::doesItHurt()
{
	return isHurting;
}

bool Hand::isItNice()
{
	return !isHurting && isSoft;
}