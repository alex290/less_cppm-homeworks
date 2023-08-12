#include <iostream>

class Triangle
{
public:
	Triangle() {
		a = 10; 
		b = 20; 
		c = 30;
		A = 50; 
		B = 60;
		C = 70;
		name = "Треугольник";
	};

	int get_a() { return a; };
	int get_b() { return b; };
	int get_c() { return c; };
	int get_A() { return A; };
	int get_B() { return B; };
	int get_C() { return C; };
	std::string get_name() { return name; };

protected:
	int a, b, c, A, B, C;
	std::string name;

};

class Quadrangle : public Triangle
{
public:
	Quadrangle() {
		d = 40;
		D = 80;
		name = "Четырёхугольник";
	};

	int get_d() { return d; };
	int get_D() { return D; };

protected:
	int d, D;
};

class RectangularTriangle : public Triangle
{
public:
	RectangularTriangle() {
		C = 90;
		name = "Прямоугольный треугольник";
	};
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle() {
		c = a;
		C = A;
		name = "Равнобедренный треугольник";
	};
};

class EquilateralTriangle : public IsoscelesTriangle
{
public:
	EquilateralTriangle() {
		c = b = a = 30;
		C = A = B;
		name = "Равносторонний треугольник";
	};
};

class Rectangle : public Quadrangle
{
public:
	Rectangle() {
		a = c = 10;
		b = d = 20;
		C = B = A = D = 90;
		name = "Прямоугольник";
	};
};

class Square : public Rectangle
{
public:
	Square() {
		a = c = b;
		name = "Квадрат";
	};
};

class Parallelogram : public Rectangle
{
public:
	Parallelogram() {
		a = c = 20;
		b = d = 30;
		C = A = 30;
		B = D = 40;
		name = "Параллелограмм";
	};
};

class Rhomb : public Parallelogram
{
public:
	Rhomb() {
		a = c = b;
		name = "Ромб";
	};
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Triangle triangle;
	RectangularTriangle rectangularTriangle;
	IsoscelesTriangle isoscelesTriangle;
	EquilateralTriangle equilateralTriangle;

	Quadrangle quadrangle;
	Rectangle rectangle;
	Square square;
	Parallelogram parallelogram;
	Rhomb rhomb;


	std::cout << triangle.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << triangle.get_a() << " b=" << triangle.get_b() << " c=" << triangle.get_c() << std::endl;
	std::cout << "Углы: A=" << triangle.get_A() << " B=" << triangle.get_B() << " C=" << triangle.get_C() << std::endl << std::endl;

	std::cout << rectangularTriangle.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << rectangularTriangle.get_a() << " b=" << rectangularTriangle.get_b() << " c=" << rectangularTriangle.get_c() << std::endl;
	std::cout << "Углы: A=" << rectangularTriangle.get_A() << " B=" << rectangularTriangle.get_B() << " C=" << rectangularTriangle.get_C() << std::endl << std::endl;

	std::cout << isoscelesTriangle.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << isoscelesTriangle.get_a() << " b=" << isoscelesTriangle.get_b() << " c=" << isoscelesTriangle.get_c() << std::endl;
	std::cout << "Углы: A=" << isoscelesTriangle.get_A() << " B=" << isoscelesTriangle.get_B() << " C=" << isoscelesTriangle.get_C() << std::endl << std::endl;

	std::cout << equilateralTriangle.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << equilateralTriangle.get_a() << " b=" << equilateralTriangle.get_b() << " c=" << equilateralTriangle.get_c() << std::endl;
	std::cout << "Углы: A=" << equilateralTriangle.get_A() << " B=" << equilateralTriangle.get_B() << " C=" << equilateralTriangle.get_C() << std::endl << std::endl;

	std::cout << quadrangle.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << quadrangle.get_a() << " b=" << quadrangle.get_b() << " c=" << quadrangle.get_c() << " d=" << quadrangle.get_d() << std::endl;
	std::cout << "Углы: A=" << quadrangle.get_A() << " B=" << quadrangle.get_B() << " C=" << quadrangle.get_C() << " D=" << quadrangle.get_D() << std::endl << std::endl;

	std::cout << rectangle.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << rectangle.get_a() << " b=" << rectangle.get_b() << " c=" << rectangle.get_c() << " d=" << rectangle.get_d() << std::endl;
	std::cout << "Углы: A=" << rectangle.get_A() << " B=" << rectangle.get_B() << " C=" << rectangle.get_C() << " D=" << rectangle.get_D() << std::endl << std::endl;

	std::cout << square.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << square.get_a() << " b=" << square.get_b() << " c=" << square.get_c() << " d=" << square.get_d() << std::endl;
	std::cout << "Углы: A=" << square.get_A() << " B=" << square.get_B() << " C=" << square.get_C() << " D=" << square.get_D() << std::endl << std::endl;

	std::cout << parallelogram.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << parallelogram.get_a() << " b=" << parallelogram.get_b() << " c=" << parallelogram.get_c() << " d=" << parallelogram.get_d() << std::endl;
	std::cout << "Углы: A=" << parallelogram.get_A() << " B=" << parallelogram.get_B() << " C=" << parallelogram.get_C() << " D=" << parallelogram.get_D() << std::endl << std::endl;

	std::cout << rhomb.get_name() << ": " << std::endl;
	std::cout << "Стороны: a=" << rhomb.get_a() << " b=" << rhomb.get_b() << " c=" << rhomb.get_c() << " d=" << rhomb.get_d() << std::endl;
	std::cout << "Углы: A=" << rhomb.get_A() << " B=" << rhomb.get_B() << " C=" << rhomb.get_C() << " D=" << rhomb.get_D() << std::endl << std::endl;
}

