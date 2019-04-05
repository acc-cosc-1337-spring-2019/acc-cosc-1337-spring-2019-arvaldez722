#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

#include<iostream>
#include<string>
#include<vector>

class TicTacToe 
{
public:
	TicTacToe(int size) : pegs(size*size, " ") {};
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	std::string get_winner()const;
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToe & t);
	friend std::istream & operator >> (std::istream & in,
		TicTacToe & t);

protected:
	std::vector<std::string> pegs;

	virtual bool check_column_win()= 0;
	virtual bool check_row_win()= 0;
	virtual bool check_diagonal_win()= 0;

private:
	std::string next_player;
	std::string winner;

	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
};
#endif //!tictactoe