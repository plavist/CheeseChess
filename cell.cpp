namespace Core {
	class Cell {
	private:
		Figure* figure = nullptr;
		int x, y;

	public:

		Figure* GetFigure() {
			return figure;
		}
		bool OnClick() {
			return 0;
		}

	};
}