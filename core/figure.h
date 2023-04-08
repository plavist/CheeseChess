#pragma once

class Cell;

namespace Core {

	class Figure {
	public:
		int GetType();
		char GetColor();

		void SetType(int Type);
		void SetColor(char Color);

		void Move(Cell* NextCell);
	private:
		int type;
		char color // 'b' or 'w'
	};

};