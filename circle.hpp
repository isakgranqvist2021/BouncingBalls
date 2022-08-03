#include "config.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

class Circle
{
public:
    sf::CircleShape circleShape;

    Circle()
    {
        circleShape.setRadius(50);
        circleShape.setFillColor(sf::Color::Red);
    };

    void fall()
    {
        sf::Vector2f position = circleShape.getPosition();
    }
};