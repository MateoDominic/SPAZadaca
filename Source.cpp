#include <SFML/Graphics.hpp>
#include <vector>
#include <math.h>
#include "Cvijet.h"
#include <iostream>
using namespace std;


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!");
	window.setFramerateLimit(100);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) 
				window.close();
		}

		window.clear(); 
		cvijet.draw();
		window.display();
		
	
	}

	return 0;
}



