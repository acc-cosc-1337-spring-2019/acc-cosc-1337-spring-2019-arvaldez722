#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include<vector>
#include<string>
//Write class function implementations here

void TicTacToeManager::display_history()
{


}

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(TicTacToe);

	update_winner_count(TicTacToe::winner == "X" || "O" || "C")
}

void TicTacToeManager::display_history() const
{
	for(std::vector<TicTacToe> games: iterator = 0; )
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
	else
		++ties;
}
