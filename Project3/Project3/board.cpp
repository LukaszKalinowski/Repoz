#include "board.h"

#define FILLER '*'

Tboard::Tboard() : array(3, std::vector<char>(3, FILLER)) {}

std::vector<char> Tboard::operator[](int index){
	if (index < 0 || index >= array.size()) {
		throw std::out_of_range("index out of range");
	}
	return array[index];
}

void Tboard::write_board() {
	int i = 0;
	for (const std::vector<char>row : array) {
		int j = 0;
		for (char element : row) {
			std::cout << ' ' << element;
			if (j < 2) {
				std::cout << " |";
				j++;
			}
		}
		if (i < 2) {
			std::cout << std::endl << "-----------" << std::endl;
			i++;
		}
	}
	std::cout <<"\n\n";
	
}

bool Tboard::check_win(char sign) {
	int row_check=0, column_check = 0, check_side_one=0, check_side_two = 0, k = 2; 
	for (size_t i = 0; i < array.size(); i++) {
		//check rows and columns
		for (size_t j = 0; j < array[i].size(); j++) {
			if (array[i][j] == sign)
				row_check++;
			if (array[j][i] == sign)
				column_check++;
		}
		//checking diagonal one
		if (array[i][i] == sign)
			check_side_one++;
		//checking diagonal two
		if (array[i][k] == sign)
			check_side_two++;

		if (row_check == 3||column_check==3||check_side_one==3||check_side_two==3)
			return true;
		row_check = 0;
		column_check = 0;
		k--;
		
	}
	
	return false;
}

//adds move to the board

bool Tboard::add_move(int i, int j, char sign) {
	if (array[i][j] == FILLER) {
		array[i][j] = sign;
		return true;
	}
	std::cout << "Given coordinates are not available, try again" << std::endl;
	return false;
}

//checks if board is full

bool Tboard::is_full() {
	for (const std::vector<char> row : array) {
		for (char element : row) {
			if (element == FILLER)
				return false;
		}
	}
	return true;
}