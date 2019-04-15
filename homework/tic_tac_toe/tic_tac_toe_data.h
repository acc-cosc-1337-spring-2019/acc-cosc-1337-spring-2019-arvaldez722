#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include<memory>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::unique_ptr;
using std::fstream;

class TicTacToeData 
{
public:
	void save_game(const vector<string>& pegs);
	vector<unique_ptr<TicTacToe>> get_games();
	
private:
	const string file_name{ "tic_tac_toe.dat" };
};

#endif