#include "config.hpp"
#include "rect.hpp"
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

int main()
{
    Rectangle rect;

    while (WINDOW.isOpen())
    {
        sf::Event event;

        while (WINDOW.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                WINDOW.close();
            }
        }

        rect.move();

        WINDOW.clear();
        WINDOW.draw(rect.rect);
        WINDOW.display();
    }

    return 0;
}
