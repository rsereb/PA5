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
<<<<<<< HEAD
=======
>>>>>>> main
cout << "Testing to see if github is working for us.";
=======
>>>>>>> e79953aba3253a0fa0c768d6192f9b37f10d51d6
    return 0;
}