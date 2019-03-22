#include "tic_tac_toe_manager.h"
#include <string>
#include <iostream>
using std::cout; using std::cin;


int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToeManager manager;
	
	do 
	{
		TicTacToe tic_tac_toe;

		cout << "First player: ";
		cin >> first;
		tic_tac_toe.start_game(first);

		while (tic_tac_toe.game_over() == false) 
		{
			std::cout << "Enter psoition for " << tic_tac_toe.get_player();
			std::cin >> position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();

			std::cout << "\n\n";
		}

		manager.save_game(tic_tac_toe);

		cout << "Wanna try again?";
		cin >> choice;

	} while (choice == 'y');

	manager.display_history();

	return 0;
}