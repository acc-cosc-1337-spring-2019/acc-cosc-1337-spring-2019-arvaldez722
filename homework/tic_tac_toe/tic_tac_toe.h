#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

#include <iostream>
#include <string>
#include <vector>

class TicTacToe
{
public:
	TicTacToe(int size) : pegs(size*size, " ") {};
	TicTacToe(std::vector<std::string>);
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	std::string get_winner()const;
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToe & t);
	friend std::istream & operator >> (std::istream & in,
		TicTacToe & t);


	const std::vector<std::string>& get_pegs();

protected:
	std::vector<std::string> pegs;

	virtual bool check_column_win() = 0;
	virtual bool check_row_win() = 0;
	virtual bool check_diagonal_win() = 0;
	void determine_winner();

private:
	std::string next_player;
	std::string winner;

	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
};
#endif //!tictactoe