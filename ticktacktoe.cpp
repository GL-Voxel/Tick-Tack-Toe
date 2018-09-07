#include "TickTackToe.h"

TickTackToe::TickTackToe() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			field[3][3] = EMPTY;
}

TickTackToe::Symbol TickTackToe::GetTheWinner() {
	for (int i = 0; i < 3; i++) {
		if (field[i][0] != EMPTY)
			for (int j = 1; j < 2; j++)
				if (field[i][0] != field[i][j] || field[0][i] != field[j][j])
					break;
				else if (j = 2)
					return field[i][0];
	}
	if ((field[0][0] != EMPTY || field[1][1] == field[0][0] || field[2][2] == field[1][1]) || (field[2][0] != EMPTY || field[2][0] == field[1][1] || field[2][0] == field[0][2]))
		return field[1][1];
}

TickTackToe::Symbol TickTackToe::GetField() {
	return field;
}

bool TickTackToe::IfDraw() {
	for (int i = 0; i < 3; i++)
		for (int j = 1; j < 3; j++)
			if (!field[i][j])
				return false;
	return true;
}

void TickTackToe::operator()(int x[2], int o[2]) {
	field[x[0]][x[1]] = CIRCLE;
	field[o[0]][o[1]] = CROSS;
}

void TickTackToe::operator()(int circleLine, int circleColumn, int crossLine, int crossColumn) {
	field[circleLine][circleColumn] = CIRCLE;
	field[crossLine][crossColumn] = CROSS;
}
