#include "game.h"

void TGame::Play() {
	try {
		
		std::cout << "Welcome to TicTacToe " << std::endl<<"enter your name: ";
		std::string name;
		std::cin >> name;
		player1.setname(name);
		std::cout << std::endl << "Enter player's 2 name: ";
		std::cin >> name;
		player2.setname(name);
		board.write_board();
		while (!is_win&&!board.is_full()) {
			int x = 0, y = 0;
			std::cout << "Insert your sign (row): ";
			std::cin >> x;
			std::cout << "\nInsert your sign (column): ";
			std::cin >> y;
			board.add_move(x, y, player1.getsign());
			board.write_board();
			is_win = board.check_win(player1.getsign());

		}

	}
	catch (std::exception &e) {
		std::cerr << e.what()<<std::endl;
	}
}