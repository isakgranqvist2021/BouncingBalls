#include "config.hpp"
#include "circle.hpp"
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

int main()
{
    Circle circle;

    while (WINDOW.isOpen())
    {
        sf::Event event;

        while (WINDOW.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                WINDOW.close();
            }
        }

        circle.fall();

        WINDOW.clear();
        WINDOW.draw(circle.circleShape);
        WINDOW.display();
    }

    return 0;
}
