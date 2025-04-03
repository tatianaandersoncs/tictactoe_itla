#include "TicTacToe.h"
#include <cstdlib>
#include<iostream>
using namespace std;

char board[3][3]; //Possible values are X, O and _ (for blank positions)
char player = 'X';
int plays = 0;
char winner;


void clearScreen()
{
	cout << "Check\n";
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}


bool isGameOver()
{
    plays++;

    if (plays > 5)
    {
        for (int i = 0; i < 3; ++i) {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != '_') ||
                (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != '_')) {
                cout << "Player " << winner << " win." << endl;
                return true;
            }
        }

        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != '_') ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != '_')) {
            cout << "Player " << winner << " win." << endl;
            return true;
        }
    }
    return false;
}
