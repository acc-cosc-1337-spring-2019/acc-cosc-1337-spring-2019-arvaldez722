#include<string>

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	std::string get_player() const;
private:
	std::string next_player;
};