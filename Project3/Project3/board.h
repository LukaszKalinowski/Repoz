#pragma once
#include <vector>
#include <exception>
#include <iostream>
class Tboard {
private:
	std::vector<std::vector<char>> array;
public:
	//default constructor
	Tboard();
	
	std::vector<char> operator[](int index);
	//writes out board
	void write_board();
	//checks if win
	bool check_win(char znak);
	//adds move to the board
	bool add_move(int i, int j, char sign);
	//checks if board is full
	bool is_full();

};