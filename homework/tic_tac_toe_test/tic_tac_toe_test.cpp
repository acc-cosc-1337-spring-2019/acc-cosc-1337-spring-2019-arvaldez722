#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//Test cases for 3x3
TEST_CASE("Test game over 3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->game_over();

	REQUIRE(board->game_over() == false);

	delete board;
}

TEST_CASE("Test first player O 3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");

	REQUIRE(board->get_player() == "O");

	delete board;
}

TEST_CASE("Test first player X 3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");

	REQUIRE(board->get_player() == "X");

	delete board;
}

TEST_CASE("Test win first column 3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//x
	//x wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");

	delete board;
}

TEST_CASE("Test win by 2nd column 3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//o

	//x wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}
TEST_CASE("Test win by 3rd column  3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	//x wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");

	delete board;
}

TEST_CASE("Test win by 1st ROW  3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//o

	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}
TEST_CASE("Test win by 2nd ROW  3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	//x wins
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win by 3rd ROW  3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//o

	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}

TEST_CASE("Test win by Diagonal 1  3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	//x wins
	REQUIRE(board->game_over() == true);

	delete board;
}
TEST_CASE("Test win by Diagonal 2  3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//o

	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}

TEST_CASE("Test No Winner 3x3")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");

	delete board;
}
	

//Test cases for 4x4
TEST_CASE("Test game over 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->game_over();

	REQUIRE(board->game_over() == false);

	delete board;
}

TEST_CASE("Test first player O 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");

	REQUIRE(board->get_player() == "O");

	delete board;
}

TEST_CASE("Test first player X 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");

	REQUIRE(board->get_player() == "X");

	delete board;

}

TEST_CASE("Test win first column 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(12);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(13);//x
	//x wins

	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");

	delete board;
}

TEST_CASE("Test win by 2nd column 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(10);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(14);//o
	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}
TEST_CASE("Test win by 3rd column 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(11);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(10);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(15);//x

	//x wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
	delete board;
}
TEST_CASE("Test win by 4th column 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(12);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(16);//o
	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}

TEST_CASE("Test win by 1st ROW 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(3);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//x
	//x wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");

	delete board;
}

TEST_CASE("Test win by 2nd ROW 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(5);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//o

	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

	delete board;
}
TEST_CASE("Test win by 3rd ROW 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(10);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(11);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(12);//x

	//x wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
	delete board;
}

TEST_CASE("Test win by 4th row 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(13);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(14);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(8);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(15);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(16);//o
	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");

}

TEST_CASE("Test win by Diagonal 1 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(2);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(11);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(16);//x

	//x wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by Diagonal 2 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("O");

	REQUIRE(board->game_over() == false);
	board->mark_board(4);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(6);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(7);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(9);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(10);//o

	REQUIRE(board->game_over() == false);
	board->mark_board(1);//x

	REQUIRE(board->game_over() == false);
	board->mark_board(13);//o
	//o wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "O");
}

TEST_CASE("Test No Winner 4x4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//O  
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
}