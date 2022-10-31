#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <SFML/Graphics.hpp>
#include <iostream>
class Game
{
public:
    Game();
    ~Game(){};
    void handleInput();
    void update();
    void render();
    bool isDone() const;
private:
    sf::RenderWindow mWindow;
    bool mIsDone;
    sf::Texture mTextureTile;
    sf::CircleShape mSpaceShip;
    //sf::CircleShape mEnemyShip;
    sf::Vector2i mIncrement;
    void moveShip();
   
};
#include <iostream>





#endif