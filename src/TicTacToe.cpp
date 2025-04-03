#include "TicTacToe.h"
#include <cstdlib>
#include<iostream>
using namespace std;

char board[3][3]; //Possible values are X, O and _ (for blank positions)
char player = 'X';
int plays = 0;
char winner;
bool gameOver = false;


void clearScreen()
{
	cout << "Check\n";
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

bool gameOver{
	gameOver = true;
	return true;
}