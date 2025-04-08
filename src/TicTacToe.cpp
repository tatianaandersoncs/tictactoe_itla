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

bool ValidateInput(int row, int column)
{ 
	if(row > 1 || row > 3 || column > 1 || column > 3 )
	{
		cout << "This input is not within the board please try again!" << endl;
		return false;
	}

	if(board[row][column]!= '_')
	{ 
		cout << "This spot is already taken please try again!" << endl;
		return false; 
	}

	else return true;
 
}

