/* -- SFML Tutorial
   -- Main.cpp
   -- From http://www.sfml-dev.org/tutorials/2.4/
   -- Created by Peter Lodato
   -- Originally created 24 December 2016
   -- Last modified 27 December 2016 */

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main() {
	// Displays note that all times are in microseconds (user must press akey to continue)
	cout << "NOTE: All times are in microseconds." << endl;
	system("pause");
	cout << endl;

	// Starts the clock
	sf::Clock clock;

	// Default window
	//sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

	// Custom window
	sf::RenderWindow window(sf::VideoMode(800, 600), "ayy lmao");

	// Measures and outputs time to create window
	//sf::Time timeToCreateWindow = clock.getElapsedTime();
	//cout << "Time to create window: " << timeToCreateWindow.asMicroseconds() << endl;

	// Restarts clock
	//clock.restart();

	// Default shape
	//sf::CircleShape shape(100.f);

	// Custom shape
	sf::CircleShape shape(300.f, 90);

	// Measures and outputs time to create shape
	//sf::Time timeToCreateShape = clock.getElapsedTime();
	//cout << "Time to create shape: " << timeToCreateShape.asMicroseconds() << endl;
	
	//clock.restart();

	// Default shape color
	//shape.setFillColor(sf::Color::Green);

	// Custom shape color
	shape.setFillColor(sf::Color::Blue);

	// Measures and outputs time to color shape
	//sf::Time timeToColorShape = clock.getElapsedTime();
	//cout << "Time to color shape: " << timeToColorShape.asMicroseconds() << endl;

	sf::Time timeToClear;
	sf::Time timeToDrawShape;
	sf::Time timeToDisplay;

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Restarts clock
		clock.restart();

		window.clear();
		
		// Measures and outputs time to clear window
		timeToClear = clock.getElapsedTime();
		cout << "Time to clear window: " << timeToClear.asMicroseconds() << endl;

		clock.restart();

		window.draw(shape);

		// Measures and outputs time to draw shape
		timeToDrawShape = clock.getElapsedTime();
		cout << "Time to draw shape: " << timeToDrawShape.asMicroseconds() << endl;

		clock.restart();

		window.display();

		// Measures and outputs time to display window
		timeToDisplay = clock.getElapsedTime();
		cout << "Time to display window: " << timeToDisplay.asMicroseconds() << endl << endl;
	}

	return 0;
}