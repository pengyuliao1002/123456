#include <iostream>
#include <cstdlib>
#include <ctime>
#include"Game.h"
using namespace std;

int main() {
    string player_name;
    cout << "Enter your name: ";
    cin >> player_name;

    int n = 1;
    while(n != -1)
    {
        Game game(player_name);
        game.play();
        cout << "Enter -1 to end the game, enter other values to play again.";
        cin >> n;
    }

    return 0;
}