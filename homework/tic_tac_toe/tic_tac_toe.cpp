#include "tic_tac_toe.h"
#include<iostream>
#include <cmath>

TicTacToe::TicTacToe(std::vector<std::string> def_pegs)
{
	pegs = def_pegs;
}

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
	clear_board();
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if(check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		set_winner();
		return true;
	}

	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;

	if (!game_over())
	{
		set_next_player();
	}
}

void TicTacToe::set_next_player()
{
	if (next_player == "X") 
	{
		next_player = "O";
	}
	else 
	{
		next_player = "X";
	}
}

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
	{
		p = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (auto p : pegs) 
	{
		if (p == " ") 
		{
			return false;
		}
	}

	return true;
}

std::string TicTacToe::get_winner() const
{
	return winner;
}

void TicTacToe::set_winner() 
{
	if (check_board_full()) 
	{
		winner = "C";
	}
	else 
	{
		winner = next_player;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	//nested loop
	int length = std::sqrt(t.pegs.size());

	//for each row
	for (std::size_t i = 0; i < length; ++i)
	{
		//for each column
		for (std::size_t j = 0; j < length; ++j)
		{
			std::cout << t.pegs[i*length+j];
			if (length - 1 != j) {
				std::cout << "|";
			}
		}

		//at the end of each line
		std::cout << std::endl;
	}

	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & t)
{
	int position = 0;

	while (position < 1 || position > t.pegs.size()) {
		std::cout << "Enter position[1-" << t.pegs.size() << "]: ";

		in >> position;

		if (position < 1 || position > t.pegs.size()) {
			std::cout << "This move is out of range!" << std::endl;
		}
		else {
			if (" " != t.pegs[position - 1]) {
				std::cout << "This position is already taken!" << std::endl;
				position = 0;
			}
		}
	}

	t.mark_board(position);

	return in;
}
const std::vector<std::string>& TicTacToe::get_pegs()
{
	return pegs;
}

void TicTacToe::determine_winner()
{
	//TODO: Actually implement this
	//set the winner ...
	winner = "U";
}
