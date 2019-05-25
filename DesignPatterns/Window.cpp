#include "Window.h"
Window* Window::instance = 0;




Window* Window::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Window();
		return instance;
	}
	else
	{
		return instance;
	}
}

std::string Window::getWindowName()
{
	return "Moj Singleton prozor";
}

void Window::update()
{
	

	while (renderContext->isOpen())
	{
		sf::Event event;
		while (this->renderContext->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				this->renderContext->close();
		}

		this->renderContext->clear();
		this->renderContext->display();
	}
}

Window::Window()
{
	renderContext = new sf::RenderWindow(sf::VideoMode(800, 600), this->getWindowName());
}


Window::~Window()
{
}
