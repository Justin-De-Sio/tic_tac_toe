//
// Created by Justin on 10/09/2021.
//

#include "TicTacToe.h"
#include <iostream>
#include <iomanip>

using namespace std;

void TicTacToe::ShowBoard() {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ' ' << m_board[i][j] << ' ';
            if (j != 2)
                cout << "|";
        }
        cout << "\n";
        if (i != 2)
            cout << setw(12) << setfill('-') << '\n';
    }
}

void TicTacToe::setCase(char Player, unsigned int i, unsigned int j) {
    m_board[i][j] = Player;
}

void TicTacToe::EditBoard(Player p) {
    p.AskCaseNumber();
    unsigned  caseId = p.getLastCase();

 switch (caseId) {
        case 1:
            m_board[0][0] = p.getTeam();
            break;
        case 2:
            m_board[0][1] = p.getTeam();
            break;
        case 3:
            m_board[0][2] = p.getTeam();
            break;
        case 4:
            m_board[1][0] = p.getTeam();
            break;
        case 5:
            m_board[1][1] = p.getTeam();
            break;
        case 6:
            m_board[1][2] = p.getTeam();
            break;
        case 7:
            m_board[2][0] = p.getTeam();
            break;
        case 8:
            m_board[2][1] = p.getTeam();
            break;
        case 9:
            m_board[2][2]= p.getTeam();
            break;
    }
}

bool TicTacToe::IsRow() const {
    //TODO
}





