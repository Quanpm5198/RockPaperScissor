// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;
int main()
{
	string player1Choice;
	string player2Choice;

	cout << "Player 1, enter your weapon: " << endl;
	cin >> player1Choice;
	system("cls");

	cout << "Player 2, enter your weapon: " << endl;
	cin >> player2Choice;

	if (player1Choice == player2Choice)
	{
		cout << "Tie!" << endl;
	}
	else if 
		((player1Choice == "rock" && player2Choice == "scissors") ||
		(player1Choice == "paper" && player2Choice == "rock") ||
		(player1Choice == "scissors" && player2Choice == "paper"))
	{
		cout << " Player 1 wins!" << endl;
	}
	else if
		((player2Choice == "rock" && player1Choice == "scissors") ||
			(player2Choice == "paper" && player1Choice == "rock") ||
			(player2Choice == "scissors" && player1Choice == "paper"))
	{
		cout << " Player 2 wins!" << endl;
	}

	else
	{
		cout << " invalid choice, choose rock, paper, or scissors" << endl;
	}
	return 0;
}



