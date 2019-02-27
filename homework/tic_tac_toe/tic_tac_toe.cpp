#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check)
	{
		return true;
	}
	return false;
}

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::mark_board(int position) // model what would happen if selected position 1
{                                        // think about vector index[0]
	pegs[position - 1] = next_player;
}

std::string TicTacToe::get_player const()
{
	return std::string();
}

void TicTacToe::set_next_player()
{
	if (next_player == 'X' || 'x')
	{
		set_next_player == 'O' || 'o';
	}
	else
		set_next_player == 'X' || 'x';


}

bool TicTacToe::check_column_win()   //win by column if 0,3,6 // 2,5,8
{                                        // 1,4,7
	for (std::size_t i = 0; i < 3; ++i)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i + 6] != " ")
		{
			return true;
		}
	}
		
	return false;
}
