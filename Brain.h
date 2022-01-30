#pragma once

class Ear;
class Eye;
class Face;
class Hand;
class Leg;
class BodyPart;

// Mediator
class Brain
{
public:
	Ear* ear;
	Eye* eye;
	Face* face;
	Hand* hand;
	Leg* leg;
public:
	Brain();
private:
	void createBodyParts();
public:
	void somethingHappenedToBodyPart(BodyPart* bodyPart);
};
