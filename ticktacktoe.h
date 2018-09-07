class TickTackToe {
	enum Symbol {
		EMPTY,
		CIRCLE,
		CROSS
	};
	Symbol field[3][3];
public:
	TickTackToe();
	Symbol GetField();
	Symbol GetTheWinner();
	bool IfDraw();
	void operator()(int x[2], int o[2]);
	void operator()(int circleLine, int circleColumn, int crossLine, int crossColumn);
};
