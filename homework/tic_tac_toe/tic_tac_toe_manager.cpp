#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

//Write class function implementations here

TicTacToeManager::TicTacToeManager() {
	games = data.get_games();
	set_scores();
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
	data.save_game(game->get_pegs());
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else {
		return std::make_unique<TicTacToe4>();
	}
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "C") 
	{
		ties++;
	}
	else if (winner == "X") 
	{
		x_win++;
	}
	else if (winner == "O") 
	{
		o_win++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & t)
{
	for (auto& game : t.games)
	{
		out << *game;
	}

	out << "X wins: " << t.x_win << "\n";
	out << "O wins: " << t.o_win << "\n";
	out << "Ties: " << t.ties << "\n";

	return out;
}

const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games()
{
	return games;
}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& c)
{
	x = x_win;
	o = o_win;
	c = ties;
}

void TicTacToeManager::set_scores()
{
	for (int i = 0; i < games.size(); ++i) {
		update_winner_count(games[i]->get_winner());
	}
}
