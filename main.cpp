#include "config.hpp"
#include "rect.hpp"
#include <SFML/Graphics.hpp>
#include <string>
#include "rand.hpp"
#include <vector>

using namespace std;

int main()
{
    vector<Rectangle> rectangles;

    while (WINDOW.isOpen())
    {
        sf::Event event;

        while (WINDOW.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                WINDOW.close();
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            {
                RandomPosition randomPosition = getRandomPosition();

                Rectangle rect(randomPosition.x, randomPosition.y);
                rectangles.push_back(rect);
            }
        }

        WINDOW.clear();

        for (int i = 0; i < rectangles.size(); i++)
        {
            rectangles[i].rotate();
            WINDOW.draw(rectangles[i].rect);
        }

        WINDOW.display();
    }

    return 0;
}
