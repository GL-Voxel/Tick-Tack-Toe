#include "pch.h"

void PlayTickTackToe() {
	TickTackToe tickTackToe;
	int x[2], y[2];
	while (true)
	{ 
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				cout << tickTackToe.GetField()[i][j] << endl;
		tickTackToe(x, y);
		if (tickTackToe.IfVictory()) {
			cout << "The Winner is " << tickTackToe.IfVictory() << endl;
			break;
		}
		if (tickTackToe.IfDraw()) {
			cout << "Ничья";
		}
	}
}
