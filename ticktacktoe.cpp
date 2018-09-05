class TickTackToe{
	char field[3][3];
	Player players[2];
public:
	TickTackToe() {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				field[3][3] = '_';
		players[2] = ('o'), ('x');
	}

	char * GetField()
	{
		return *field;
	}
	
	int CheckVictory(){
		for (int i = 0; i < 3; i++) {
			if (field[i][0] != '_') {
				for (int j = 1; j < 2; j++)
					if (field[i][0] != field[i][j] || field[0][i] != field[j][j])
						break;
					else if (j = 2)
						return true;
			}
		}
	}

	char operator()(int x[2], int o[2]){
			players[0].MakeTurn(field[x[0]][x[1]]);
			players[1].MakeTurn(field[o[0]][o[1]]);
	}
};
