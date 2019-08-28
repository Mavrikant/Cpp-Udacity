//
// Created by serdar on 29.08.2019.
//
/*header file for main.cpp*/
#include <iostream>
#include <iomanip>

using namespace std;

class Gameboard {
    char gameSpace[4][4];
public:
    Gameboard();

    void setGameSpace(int row, int column, char value);

    char getGameSpace(int row, int column);

    int fourInRow();

    void printInfo();
};

Gameboard::Gameboard() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            gameSpace[i][j] = '-';
        }
}

void Gameboard::setGameSpace(int row, int column, char value) {
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column) {
    return gameSpace[row][column];
}

int Gameboard::fourInRow() {
    int count;
    for (int i = 0; i < 4; i++) {
        count = 0;
        for (int j = 0; j < 4; j++) {
            if (gameSpace[i][j] == 'x') {
                count++;
                //cout<<"count = "<<count;
            }
        }
        if (count == 4)
            return 1;
    }
    return 0;
}

void Gameboard::printInfo() {
    cout << std::setw(5);
    cout << "\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << gameSpace[i][j];
        }
        cout << "\n";
    }
}


int main_20() {
    Gameboard game1;
    game1.setGameSpace(0, 0, 'x');
    game1.setGameSpace(0, 1, 'x');
    game1.setGameSpace(0, 2, 'x');
    game1.setGameSpace(0, 3, 'y');
    game1.setGameSpace(1, 0, 'x');
    game1.setGameSpace(2, 0, 'x');
    game1.setGameSpace(3, 0, 'x');
    game1.setGameSpace(3, 1, 'x');
    game1.setGameSpace(3, 2, 'x');
    game1.setGameSpace(3, 3, 'x');

    if (game1.fourInRow() == 1) {
        cout << "X got four in a row!\n\n";
    } else {
        cout << "X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}