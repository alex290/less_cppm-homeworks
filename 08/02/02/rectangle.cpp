#include "rectangle.h"

Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
{
	count = 4;
	name = "Прямоугольник";
}
