#pragma once
#include <string>

class Thuman {
protected:
	char sign;
	std::string player_name;
public:
	Thuman();
	Thuman(char character, std::string name);
	void setsign(char nowy_sign);
	char getsign();
	void setname(std::string player);
	
};