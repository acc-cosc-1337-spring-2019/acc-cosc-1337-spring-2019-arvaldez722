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
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->game_over();

	REQUIRE(tic_tac_toe->game_over() == false);

	
}

TEST_CASE("Test first player O 3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->get_player() == "O");

	delete tic_tac_toe;
}

TEST_CASE("Test first player X 3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->get_player() == "X");

	delete tic_tac_toe;
}

TEST_CASE("Test win first column 3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//x
	//x wins

	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");

	delete tic_tac_toe;
}

TEST_CASE("Test win by 2nd column 3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//o

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}
TEST_CASE("Test win by 3rd column  3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");

	delete tic_tac_toe;
}

TEST_CASE("Test win by 1st ROW  3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//o

	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}
TEST_CASE("Test win by 2nd ROW  3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);

	delete tic_tac_toe;
}

TEST_CASE("Test win by 3rd ROW  3x3")
{
	TicTacToe* tic_tac_toe; 
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//o

	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}

TEST_CASE("Test win by Diagonal 1  3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);

	delete tic_tac_toe;
}
TEST_CASE("Test win by Diagonal 2  3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//o

	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}

TEST_CASE("Test No Winner 3x3")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//X         
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//X          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//X 
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//X 
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//X
	//X wins 
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "C");

	delete tic_tac_toe;
}
	

//Test cases for 4x4
TEST_CASE("Test game over 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->game_over();

	REQUIRE(tic_tac_toe->game_over() == false);

	delete tic_tac_toe;
}

TEST_CASE("Test first player O 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->get_player() == "O");

	delete tic_tac_toe;
}

TEST_CASE("Test first player X 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->get_player() == "X");

	delete tic_tac_toe;

}

TEST_CASE("Test win first column 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe= new TicTacToe4();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(12);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(13);//x
	//x wins

	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");

	delete tic_tac_toe;
}

TEST_CASE("Test win by 2nd column 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(14);//o
	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}
TEST_CASE("Test win by 3rd column 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(11);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(15);//x

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");
	delete tic_tac_toe;
}
TEST_CASE("Test win by 4th column 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(12);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(16);//o
	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}

TEST_CASE("Test win by 1st ROW 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//x
	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");

	delete tic_tac_toe;
}

TEST_CASE("Test win by 2nd ROW 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//o

	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

	delete tic_tac_toe;
}
TEST_CASE("Test win by 3rd ROW 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(11);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(12);//x

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");
	delete tic_tac_toe;
}

TEST_CASE("Test win by 4th row 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(13);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(14);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(15);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(16);//o
	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");

}

TEST_CASE("Test win by Diagonal 1 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(11);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(16);//x

	//x wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "X");
}
TEST_CASE("Test win by Diagonal 2 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);//o

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//x

	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(13);//o
	//o wins
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "O");
}

TEST_CASE("Test No Winner 4x4")
{
	TicTacToe* tic_tac_toe;
	tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(1);//X         
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);//X          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);//X 
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);//X 
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(11);//X
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(12);//X 
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(13);//X
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(15);//O          
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(14);//X
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(16);//O  
	//X wins 
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "C");
}