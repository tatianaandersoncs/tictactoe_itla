#include "TicTacToe.h"
#include <cstdlib>
#include <iostream>
using namespace std;

char board[3][3]; // Possible values are X, O and _ (for blank positions)
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

void showBoard()
{
	cout << "Current board:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
