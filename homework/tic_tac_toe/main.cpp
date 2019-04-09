#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <string>
#include <iostream>
#include <algorithm>	//for transform

using std::cout; 
using std::cin;
using std::endl;

int main() 
{
	std::string first = "C";
	char choice = 'N';
	int size = 0;
	std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	std::unique_ptr<TicTacToe> tic_tac_toe; 

	do 
	{
		//prompt user for board size selection
		while (size < 1 || size > 2) {
			cout << "Which version of Tic Tac Toe do you want to play?" << endl
				<< "1.) 3x3 Tic Tac Toe" << endl
				<< "2.) 4x4 Tic Tac Toe" << endl
				<< "Selection (1,2): ";
			cin >> size;
		}

		tic_tac_toe = manager->get_game(size + 2);

		//Check to see if the first player wants to be X or O
		while (first != "X" && first != "O") {
			cout << "First player (X or O?): ";
			cin >> first;

			//Convert the string to all uppercase.
			std::transform(first.begin(), first.end(), first.begin(), ::toupper);
		}
		
		tic_tac_toe->start_game(first);

		//while (!tic_tac_toe.game_over())
		while (tic_tac_toe->game_over() == false) 
		{
			cin >> *tic_tac_toe;
			cout << *tic_tac_toe;
			cout << "\n\n";
		}

		cout<<"Winner: " << tic_tac_toe->get_winner() << endl;

		manager->save_game(std::move(tic_tac_toe));

		cout << "play again";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	cout << *manager;

	
	return 0;
}