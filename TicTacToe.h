//
// Created by Justin on 10/09/2021.
//

#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H

#include <array>
#include "Player.h"

class TicTacToe {
private:
    std::array<std::array<char, 3>, 3> m_board;
public:
    void ShowBoard();
    void setCase(char Player, unsigned i, unsigned j);
    void EditBoard(Player p);
    bool IsRow() const;
};


#endif //TIC_TAC_TOE_TICTACTOE_H
