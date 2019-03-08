#include "tic_tac_toe_manager.h"
#inlcude"tic_tac_toe.h"
#include<vector>
#include<string>

//Write class function implementations here

void TicTacToeManager::display_history()
{


}

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(game);

	update_winner_count(game.get_winnter());
}

void TicTacToeManager::display_history() const
{
	for (for auto game : games)
	{
		game.display_board();

	}
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		++x_win;
	}
	else if (winner == "O")
	{
		++o_win;
	}
	else if (winner = "C")
		++ties;
}
