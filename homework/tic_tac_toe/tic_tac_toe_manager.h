#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
	void display_history();
	void save_game(const TicTacToe b); //add games to vector with .push_back

private:
	std::vector<TicTacToe> games;
	void display_history() const;


	int x_win : int = { 0 };
	int o_win : int = { 0 };
	int ties : int = { 0 };

	void update_winner_count(std::string winner);
};

#endif // !TIC_TAC_TOE_MANAGER_H
