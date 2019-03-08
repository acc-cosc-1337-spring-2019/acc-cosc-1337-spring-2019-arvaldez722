#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<vector>
#include<string>
#include "tic_tac_toe.h"

class TicTacToeManager
{
public:
	void display_history() const;
	void save_game(const TicTacToe b); //add games to vector with .push_back
	
private:

	std::vector<TicTacToe> games;
	


	int x_win{0};
	int o_win{0};
	int ties{0};

	void update_winner_count(std::string winner);
};

#endif // !TIC_TAC_TOE_MANAGER_H
