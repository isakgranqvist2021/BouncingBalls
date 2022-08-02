#include "config.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

class Rectangle
{
public:
    sf::RectangleShape rect;

    double speed;

    int x, y;
    int width, height;

    Rectangle(int x, int y)
    {
        speed = 0.1;
        width = 100;
        height = 100;

        rect.setOrigin(50, 50);

        x = x;
        y = y;

        rect.setSize(sf::Vector2f(100, 100));
        rect.setPosition(sf::Vector2f(x, y));
    };

    void rotate()
    {
        float rotation = rect.getRotation();
        float newRotation = rotation + .1;

        rect.setRotation(newRotation);
    }
};