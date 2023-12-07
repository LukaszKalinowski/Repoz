#include "human.h"

//default constructor
Thuman::Thuman() : sign('X'), player_name("default") {}

Thuman::Thuman(char character, std::string name) : sign(character), player_name(name){}

void Thuman::setsign(char nowy_sign) {
	sign = nowy_sign;
}

char Thuman::getsign() {
	return sign;
}

void Thuman::setname(std::string name) {
	player_name = name;
}
