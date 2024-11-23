#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
class dino
{
private:
    int state;
    sf::RectangleShape hitbox;
public:
    dino();
    void setsize(sf::Vector2f);
    void confighitbox(sf::Texture);
    sf::Texture getHitBoxTexture();
    sf::RectangleShape getHitBox();
    void draw(sf::RenderWindow&);
    void setPosition(sf::Vector2f);
    ~dino();
};
inline sf::Texture dino::getHitBoxTexture(){
    return *hitbox.getTexture();
}

inline sf::RectangleShape dino::getHitBox(){
    return hitbox;
}