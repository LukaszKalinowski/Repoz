#include "headsortails.h"


bool flip_a_coin(){
	srand(unsigned(time(NULL)));
	int number = 0;
	int player_answer = 0;
	number = rand() % 2 + 1;
	bool is_good = false;
	std::cout << "Let's flip a coin!!" << std::endl;
	std::cout << "Heads or tails?" << std::endl;
	while (!is_good) {
		std::string answer;
		std::cin >> answer;

		if (answer == "Heads" || answer == "heads" || answer == "HEADS") {
			std::cout << "answer HEADS registered..." << std::endl;
			player_answer = 1;
			is_good = true;
		}
		else if (answer == "Tails" || answer == "tails" || answer == "TAILS") {
			std::cout << "answer Tails registered..." << std::endl;
			player_answer = 2;
			is_good = true;
		}
		else
			std::cout << "Arghhh!! I dont understand your answer please type again :)" << std::endl;
	}
	std::cout << "Answer was...";
	if (number == 1)
		std::cout << "Heads!!!" << "\n";
	else if (number == 2)
		std::cout << "Tails!!!" << "\n";
	else {
		std::cout << "GRRRRR... ERROR ... ERROR";
		exit(0);
	}
	if (player_answer == number) {
		std::cout << "You Won!";
		return true;
	}
	else {
		std::cout << "You lost! Better luck next time";
		return false;
	}
}