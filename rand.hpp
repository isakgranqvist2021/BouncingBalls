#include <random>
#include "config.hpp"

struct RandomPosition
{
    int x;
    int y;
};

RandomPosition getRandomPosition()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> random_width(0, WINDOW_WIDTH);
    std::uniform_real_distribution<double> random_height(0, WINDOW_HEIGHT);

    RandomPosition randomPosition;

    randomPosition.x = random_width(mt);
    randomPosition.y = random_height(mt);

    return randomPosition;
}