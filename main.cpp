#include <SFML/Graphics.hpp>
#include </home/joao/Documents/aula/game/jogo/dino.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        dino Dino;        
        Dino.setsize(sf::Vector2f(100,10));
        Dino.setPosition(sf::Vector2f(50,50));
        Dino.draw(window);
        window.display();
        window.clear();
    }

    return 0;
}