#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		return true;
	}
	return false;
}

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

void TicTacToe::mark_board(int position) // model what would happen if selected position 1
{                                        // think about vector index[0]
	pegs[position - 1] = next_player;
	set_next_player();
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

std::string TicTacToe::display_board const()
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
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && 
			pegs[i + 6] != " ")
		{
			return true;
		}
	}
		
	return false;
}

//how to determine if a player has won?
bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i +1] == pegs[i+2] &&
			pegs[i+2] != " ")
	}
	return false;
}

//how
bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
	{
		return true;
	}
	else
	{
		return false;
	}

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
	{
		p = " ";
	}
	}
}

