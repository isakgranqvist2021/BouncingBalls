#include <SFML/Graphics.hpp>
#include <string>

#pragma once

#define SFML_STATIC

std::string const WINDOW_TITLE = "Window Title";

int const WINDOW_WIDTH = 1200;
int const WINDOW_HEIGHT = 800;

sf::VideoMode VIDEO_MODE(WINDOW_WIDTH, WINDOW_HEIGHT);
sf::RenderWindow WINDOW(VIDEO_MODE, WINDOW_TITLE);
