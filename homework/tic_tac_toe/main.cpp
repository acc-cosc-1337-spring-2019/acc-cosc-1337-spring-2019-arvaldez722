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
			cin >> tic_tac_toe;
			cout << tic_tac_toe;
			cout << "\n\n";
		}

		cout<<"Winner: " << tic_tac_toe.get_winner();

		manager.save_game(tic_tac_toe);

		cout << "play again";
		cin >> choice;

	} while (choice == 'y');

	cout<<manager;

	return 0;
}