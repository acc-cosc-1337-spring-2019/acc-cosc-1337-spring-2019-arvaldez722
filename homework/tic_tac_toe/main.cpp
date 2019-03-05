#include "tic_tac_toe.h"
#include<string>
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
int main()
{
	int input;
	int placing;
	string user;
	start_game
		cout << "Who's first? Select X or O to begin: "
		cin >> input;
	TicTacToe game;
	game.start_game(user)
		do
		{
			cout << ", Enter the number where you would like to place ";
			cin >> placing;
			game.mark_board(placing);
			game.display_board();
		} while (game.game_over() == false);
		cout << "Game over!!!!! Press 1 to play again"<< \n << "Press 2 to Exit";
		cin >> choice;
} while (choice == '1');
return 0;
}