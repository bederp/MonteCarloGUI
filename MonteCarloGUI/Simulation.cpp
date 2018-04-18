#include "stdafx.h"
#include "Simulation.h"


Simulation::Simulation()
{
	iterations = 0;
	inCircle = 0;
	pi = 0.0;
	srand(time(NULL));
	radious = RAND_MAX / 2;
}


Simulation::~Simulation()
{
}

void Simulation::step()
{
	iterations++;
	inCircle += wasRandomPointInCircle();
	pi = 4 * ((double)inCircle) / iterations;
}


bool Simulation::wasRandomPointInCircle()
{
	int x = rand();
	int y = rand();
	return distance(x, y) <= radious * radious;
}

double Simulation::distance(int x, int y)
{
	double distanceX = radious - x;
	distanceX *= distanceX;
	double distanceY = radious - y;
	distanceY *= distanceY;
	return distanceX + distanceY;
}