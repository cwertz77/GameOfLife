

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

// state machine constants

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::White);

	sf::SoundBuffer buffer;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			if (!buffer.loadFromFile("sound.wav"))
			{
				return -1;
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}