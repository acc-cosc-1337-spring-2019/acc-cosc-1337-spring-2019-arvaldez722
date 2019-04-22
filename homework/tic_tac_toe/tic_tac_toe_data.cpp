#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

/*
Write the code to save a vector of string into a file.
After writing all the vector strings add a new line character "\n" to file.
Close the file.
Use the fstream object and file_name(class variable). Open the file for
writing and append.
*/
void TicTacToeData::save_game(const vector<string>& pegs)
{
	ofstream outTTT;

	//open the file
	outTTT.open(file_name, std::ios_base::app); //only for append

	if (outTTT.is_open())
	{
		//figure out 3x3 or 4x4
		int length = std::sqrt(pegs.size());

		//for each row
		for (std::size_t i = 0; i < length; ++i)
		{
			//for each column
			for (std::size_t j = 0; j < length; ++j)
			{
				outTTT << pegs[i*length + j];
			}
		}

		outTTT << std::endl;
	}

	//close the file
	outTTT.close();
}

/*
Read the file with fstream and file_name, open file for input(reading).
ALGORITHM:
Create unique ptr of TicTacToe boards
		  Open File
		  while file open
			 Create vector of string
			 get a line from file
			for each ch in line
			  Create a string with each ch use std::string(1, ch) to create the string

			Add the string to vector of string

			Create unique ptr of TicTacToe board

		   if vector peg size 9
			   create board of TicTacToe3 using make_unique
		  else
			   create board of TicTacToe4 using make_unique

			  add the board to the boards vector

		 close the file

		return the  vector  of TicTacToe
*/
vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	//Create unique ptr of TicTacToe boards
	vector<unique_ptr<TicTacToe>> boards;

	string line;

	//Open File
	ifstream inTTT;

	inTTT.open(file_name);
		
	if (inTTT.is_open())
	{
		//while file open
		//get a line from file
		while (getline(inTTT, line)) //XO XO X
		{
			//Create vector of string
			vector<string> pegs;
				
			//for each ch in line
			for (int i = 0; i < line.size(); ++i)
			{
				//Create a string with each ch use std::string(1, ch) to create the string
				string ch = line.substr(i,1);

				//Add the string to vector of string
				pegs.push_back(ch);
			}

			//Create unique ptr of TicTacToe board
			unique_ptr<TicTacToe> board;

			//if vector peg size 9
			if (pegs.size() == 9)
			{
				//create board of TicTacToe3 using make_unique
				board = std::make_unique<TicTacToe3>(pegs);
			}
			else {
				//create board of TicTacToe4 using make_unique
				board = std::make_unique<TicTacToe4>(pegs);
			}

			//add the board to the boards vector
			boards.push_back(board);

		}
		//close the file
		inTTT.close();
	}
	else 
	{
		//EEEEK There was some problem here!!!!
	}

	//return the  vector  of TicTacToe
	return boards;
}
