#include "config.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

class Rectangle
{
public:
    sf::RectangleShape rect;

    double speed;
    int width, height;

    Rectangle() 
    {
        speed = 0.1;  
        width = 100;
        height = 100;

        int y = (WINDOW_HEIGHT / 2) - (height / 2);

        rect.setSize(sf::Vector2f(100, 100));
        rect.setPosition(sf::Vector2f(0, y));
    };

    void move() 
    {
        sf::Vector2f position = rect.getPosition();
        
        if(position.x >= WINDOW_WIDTH - width)
        {
            speed = -0.1;
        }

        if(speed < 0 && position.x <= 0)
        {
            speed = 0.1;
        }

        rect.setPosition(position.x + speed, position.y);
    }
};