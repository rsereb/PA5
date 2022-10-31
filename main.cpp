#include "functions.h"
int main()
{
    Game game;
    while(!game.isDone())
    {
        game.handleInput();
        game.update();
        game.render();
        cout << "test";
    }
    return 0;
}