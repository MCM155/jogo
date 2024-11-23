#include <iostream>
#include <SFML/Graphics.hpp>
#include </home/joao/Documents/aula/game/jogo/dino.hpp>

using namespace std;

dino::dino()
{
    hitbox.setFillColor(sf::Color::Green);
}
void dino::draw(sf::RenderWindow &window){
    window.draw(hitbox);
}
void dino::setsize(sf::Vector2f size){
    hitbox.setSize(size);
}
void dino::setPosition(sf::Vector2f position){
    hitbox.setPosition(position);
}
void dino::confighitbox(sf::Texture texture){
    hitbox.setTexture(&texture);
}

dino::~dino()
{
}
