#include<string>
#include<vector>

class TicTacToe 
{
public:
	bool game_over();

	void start_game(std::string first_player);

	std::string get_player() const;

	void mark_board(int position);

	std::string get_player const();

private:
	std::string next_player;
	std::vector<std::string> pegs{ 9," " };
	void set_next_player();
	bool check_column_win();

};