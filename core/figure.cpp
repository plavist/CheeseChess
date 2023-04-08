#include <core/figure.h>

using namespace Core;

void Figure::SetColor(char Color) {
	color = Color;
}

void Figure::SetType(int Type) {
	type = Type;
}

char Figure::GetColor() {
	return color;
}

int Figure::GetType() {
	return type;
}

void Figure::Move(Cell* NextCell) {

}