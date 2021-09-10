//
//
// Created by Justin on 10/09/2021.

#include "Player.h"
#include <iostream>
using namespace std;
Player::Player(char team) :  m_team(team) {}

unsigned Player::getLastCase() const {
    return m_lastCase;
}

unsigned Player::AskCaseNumber() {
    unsigned caseId{};
    cout << "Enter the position:\n";
    cin >> caseId;
    m_lastCase = caseId;
}

char Player::getTeam() const {
    return m_team;
}
