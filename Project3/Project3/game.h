#pragma once

#include "human.h"
#include "board.h"
#include "headsortails.h"


class TGame {
private:
	Tboard board;
	Thuman player1;
	Thuman player2;
	bool is_win;
public:
	TGame() : is_win(false){}
	void Play();
};