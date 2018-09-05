class Player{
	Symbol symbol;
public:
	Player(): symbol(EMPTY){}
	Player(Symbol side) : symbol(side){}
	void MakeTurn(Symbol & square) {
		square = symbol;
	}
};
