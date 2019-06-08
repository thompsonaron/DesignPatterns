#include "Rectangle.h"

Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}



void Rectangle::update() {
	//std::cout << "I am a rectangle!" << std::endl;
}

void Rectangle::attach(Observer * observer)
{
	observers.push_back(observer);
}
