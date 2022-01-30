#include "Face.h"

Face::Face(Brain* brain) : BodyPart(brain) {}

void Face::smile()
{
	cout << "FACE: Smiling :)\n";
}
