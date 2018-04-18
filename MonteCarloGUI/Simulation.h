#pragma once
class Simulation
{
public:
	double pi;
	long iterations;
private:
	long inCircle;
	long radious;
public:
	Simulation();
	~Simulation();
	void step();
private:
	bool wasRandomPointInCircle();
	double distance(int, int);
};