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
		if ((field[0][0] == field[1][1] == field[2][2] || field[2][0] == field[1][1] == field[0][2]) == ('x' || 'y') )
			return true;
		for (int i = 0; i < 3; i++)
			if(( field[i][0] == field[i][1] == field[i][2] || field[0][i] == field[1][i] == field[2][i] ) == ('x' || 'y') )
				return true;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				if(field[i][j] == '_')
					return false;
		return 3;
	}

	char operator()(int x[2], int o[2]){
			players[0].MakeTurn(field[x[0]][x[1]]);
			players[1].MakeTurn(field[o[0]][o[1]]);
	}
};
