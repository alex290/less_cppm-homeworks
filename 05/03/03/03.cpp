#include <iostream>

class Figure
{
public:
	Figure() {
		sides_count = 0;
		name = "Фигура";
	};

	int get_sides_count() { return sides_count; }
	std::string get_name() { return name; };

	virtual void print_info() {};
	virtual bool check() { return true; };
	

protected:
	int sides_count;
	std::string name;
	

};

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C) {
		a_ = a;
		b_ = b;
		c_ = c;
		A_ = A;
		B_ = B;
		C_ = C;
		sides_count = 3;
		name = "Треугольник";
	};

	int get_a() { return a_; };
	int get_b() { return b_; };
	int get_c() { return c_; };
	int get_A() { return A_; };
	int get_B() { return B_; };
	int get_C() { return C_; };

	void print_info() override {
		std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
		std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl << std::endl;
	}
	bool check() override {
		if ((A_ + B_ + C_) == 180)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

protected:
	int a_, b_, c_, A_, B_, C_;
	

};

class Quadrangle : public Triangle
{
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Triangle(a, b, c, A, B, C) 
	{
		d_ = d;
		D_ = D;
		sides_count = 4;
		name = "Четырёхугольник";
	};

	int get_d() { return d_; };
	int get_D() { return D_; };
	
	void print_info() override {
		
		std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
		std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl << std::endl;
	}

	bool check() override {
		if ((A_ + B_ + C_ + D_) == 360)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

protected:
	int d_, D_;
	
};


class RectangularTriangle : public Triangle
{
public:
	RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
	{
		name = "Прямоугольный треугольник";
	};

};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
	{
		name = "Равнобедренный треугольник";
	};
	
};

class EquilateralTriangle : public IsoscelesTriangle
{
public:
	EquilateralTriangle(int a) : IsoscelesTriangle(a, a, 60, 60)
	{
		name = "Равносторонний треугольник";
	};

};

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B)
	{
		name = "Параллелограмм";
	};

};



class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
	{
		name = "Прямоугольник";
	};

};



class Square : public Rectangle
{
public:
	Square(int a) : Rectangle(a, a)
	{
		name = "Квадрат";
	};

};




class Rhomb : public Parallelogram
{
public:
	Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B)
	{
		name = "Ромб";
	};

};

void print_info(Figure& figure)
{
	std::cout << std::endl;
	std::cout << figure.get_name() << ": " << std::endl;

	if (figure.check())
	{
		std::cout << "Правильная" << std::endl;
	}
	else
	{
		std::cout << "Неправильная" << std::endl;
	}

	std::cout << "Количество сторон: " << figure.get_sides_count() << std::endl;
	figure.print_info();
}


int main()
{
	setlocale(LC_ALL, "Russian");
	Figure figure;
	Triangle triangle(10, 20, 30, 50, 60, 70);
	RectangularTriangle rectangularTriangleOne(10, 20, 30, 50, 60);
	RectangularTriangle rectangularTriangleTwo(10, 20, 30, 50, 40);
	IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	EquilateralTriangle equilateralTriangle(30);


	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);

	Rhomb rhomb(30, 30, 40);

	print_info(figure);
	print_info(triangle);
	print_info(rectangularTriangleOne);
	print_info(rectangularTriangleTwo);
	print_info(isoscelesTriangle);
	print_info(equilateralTriangle);

	print_info(quadrangle);
	print_info(rectangle);
	print_info(square);
	print_info(parallelogram);
	print_info(rhomb);

}

