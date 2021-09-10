//
// Created by Justin on 10/09/2021.
//

#ifndef TIC_TAC_TOE_PLAYER_H
#define TIC_TAC_TOE_PLAYER_H


class Player {

public:
    explicit Player(char team);
    unsigned AskCaseNumber();
    unsigned getLastCase() const;
    char getTeam() const;
private:
    unsigned m_lastCase;
    char m_team;
};


#endif //TIC_TAC_TOE_PLAYER_H
