#include <iostream>
#include <array>
#include <unistd.h>
#include <iomanip>
#include "TicTacToe.h"

using namespace std;

int main() {
    cout << "Welcom\n"
            "Player X begin\n";
    TicTacToe g{};
    Player PlayerX{'X'};
    Player PlayerO{'0'};
    bool xBegin{true};
    for (int i = 0; i < 9; ++i) {
        if((i+xBegin)%2) {
            g.EditBoard(PlayerX);
            g.ShowBoard();

        } else{
            g.EditBoard(PlayerO);
            g.ShowBoard();

        }


    }


}