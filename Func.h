#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;


void Render(RenderWindow& win, CircleShape& s)
{
	win.draw(s);
}