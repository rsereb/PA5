#include "functions.h"
#include <iostream>

int main()
{
    Game game;
    while(!game.isDone())
    {
        game.handleInput();
        game.update();
        game.render();
    }
cout << "Testing to see if github is working for us.";
    return 0;
}