#include "functions.h"

Game::Game() : mWindow(sf::VideoMode(640, 480), "Game")
{
    mTextureTile.loadFromFile("textures.png");
    mSpaceShip.setRadius(31);
    mSpaceShip.setTexture(&mTextureTile);
    mSpaceShip.setTextureRect(sf::IntRect(280, 190, 62, 62));
    mSpaceShip.setOrigin(62.f / 2.f, 62.f / 2.f);
    mIncrement = sf::Vector2i(4, 4);
    mIsDone = false;
}
//Handle events from input devices and the window
void Game::handleInput()
{
    sf::Event event;
    while(mWindow.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            // Close window button clicked.
            mWindow.close();
        }
    }
}
//Update objects in the scene
void Game::update()
{
    moveShip();
}
void Game::moveShip()
{
    //UP
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        sf::Vector2u winSize = mWindow.getSize();
        mSpaceShip.setPosition(mSpaceShip.getPosition().x, mSpaceShip.getPosition().y - 1);
    }
    //DOWN
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
            sf::Vector2u winSize = mWindow.getSize();
            mSpaceShip.setPosition(mSpaceShip.getPosition().x, mSpaceShip.getPosition().y + 1);
    }
    //LEFT
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
            sf::Vector2u winSize = mWindow.getSize();
            mSpaceShip.setPosition(mSpaceShip.getPosition().x - 1, mSpaceShip.getPosition().y);
    }
    //RIGHT
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
            sf::Vector2u winSize = mWindow.getSize();
            mSpaceShip.setPosition(mSpaceShip.getPosition().x + 1, mSpaceShip.getPosition().y);
    }
}
//Render objects from the scene onto the window
void Game::render()
{
    mWindow.clear(sf::Color::Black);
    mWindow.draw(mSpaceShip);
    //mWindow.draw(mEnemyShip);
    mWindow.display();
}
//Check if game is done, right now, we just checked if window is still open
bool Game::isDone() const
{
    return (!mWindow.isOpen() || mIsDone);
}
