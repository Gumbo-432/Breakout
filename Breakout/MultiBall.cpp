#include "MultiBall.h"

MultiBall::MultiBall(sf::RenderWindow* window, float velocity, GameManager* gameManager) : Ball(window, velocity, gameManager)
{
	_sprite.setRadius(RADIUS);
	_sprite.setFillColor(sf::Color::Magenta);
	_sprite.setPosition(0, 300);
}

MultiBall::~MultiBall()
{

}