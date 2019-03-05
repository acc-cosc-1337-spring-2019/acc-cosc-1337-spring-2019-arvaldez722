#include<string>
#include<vector>

class TicTacToe 
{
public:
	bool game_over();

	void start_game(std::string first_player);

	void mark_board(int position);

	std::string get_player() const;

	std::string display_board const();

private:
	std::string next_player;

	bool check_column_win();

	bool check_row_win();

	bool check_diagonal_win();

	void clear_board();

	std::vector<std::string> pegs{ 9," " };

	void set_next_player();

	bool check_board_full();

	bool no_winner();

	
};