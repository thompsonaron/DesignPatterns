#include "Triangle.h"



void Triangle::update()
{
	//std::cout << "I am a triangle!" << std::endl;
}

void Triangle::attach(Observer * observer)
{
	observers.push_back(observer);
}

Triangle::Triangle()
{
}


Triangle::~Triangle()
{
}
