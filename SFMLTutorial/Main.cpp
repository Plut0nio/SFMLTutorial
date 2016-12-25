/* -- SFML Tutorial
   -- Main.cpp
   -- From http://www.sfml-dev.org/tutorials/2.4/start-vc.php
   -- Created by Peter Lodato
   -- Originally created 24 December 2016
   -- Last modified 24 December 2016 */

#include <SFML/Graphics.hpp>

int main() {
	// Default
	//sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

	// Custom
	sf::RenderWindow window(sf::VideoMode(800, 600), "ayy lmao");

	sf::CircleShape shape(100.f);

	// Default
	//shape.setFillColor(sf::Color::Green);

	// Custom
	shape.setFillColor(sf::Color::Blue);

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}