#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <memory>
//Write class interface here

class TicTacToeManager 
{
public:
	void save_game(std::unique_ptr<TicTacToe>& game);
	std::unique_ptr<TicTacToe> get_game(int game_type);

	const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games();
	void get_winner_totals(int& x, int& o, int& c);


	friend std::ostream & operator << (std::ostream & out,
		const TicTacToeManager & t);
private:
	std::vector<std::unique_ptr<TicTacToe>> games;
	void update_winner_count(std::string winner);

	int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
};

#endif // !TIC_TAC_TOE_MANAGER_H