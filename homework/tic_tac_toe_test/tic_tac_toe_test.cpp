#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over")
{
	TicTacToe board;
	board.game_over();

	REQUIRE(board.game_over() == false);

}

TEST_CASE("Test first player O")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");

	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test first player X") 
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");

}

TEST_CASE("Test win first column", "[x wins first column")
{
	TicTacToe board;
	board.start_game("x");

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(5);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//x
	//x wins

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by 2nd column")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(8);//x

	//x wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by 3rd column")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(5);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x

	//x wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by 1st ROW")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x

	//x wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by 2nd ROW")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x

	//x wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by 3rd ROW")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(8);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x

	//x wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by Diagonal 1")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(8);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x

	//x wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by Diagonal 2")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//x

	//x wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test No Winner")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x

	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(7);//x

	REQUIRE(board.get_winner() == "C");

}
	