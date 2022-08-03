#include "config.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

class Circle
{
public:
    float fallSpeed;
    float gravity;
    int radius;
    int top;

    sf::CircleShape circleShape;

    Circle()
    {
        gravity = 1;
        fallSpeed = gravity;
        radius = 50;
        top = 0;

        circleShape.setRadius(radius);
        circleShape.setFillColor(sf::Color::Red);
        circleShape.setPosition(WINDOW_WIDTH / 2 - radius * 2, 0);
    };

    void fall()
    {
        sf::Vector2f position = circleShape.getPosition();

        if (position.y >= WINDOW_HEIGHT - radius * 2)
        {
            fallSpeed = -gravity;
        }

        if (position.y <= top && fallSpeed < 0)
        {
            top += 30;
            gravity -= .1;
            fallSpeed = gravity;
        }

        if (top >= WINDOW_HEIGHT)
        {
            fallSpeed = 0;
        }

        circleShape.setPosition(position.x, position.y += fallSpeed);
    }
};