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

	virtual void print_info() { 
		std::cout << get_name() << ": " << std::endl;
		if (check())
		{
			std::cout << "Правильная" << std::endl;
		} 
		else 
		{
			std::cout << "Неправильная" << std::endl;
		}

		std::cout << "Количество сторон: " << sides_count << std::endl;
	};
	

protected:
	int sides_count;
	std::string name;
	virtual bool check() { return true; };

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
		std::cout << std::endl;
		Figure::print_info();
		std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
		std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl << std::endl;
	}

protected:
	int a_, b_, c_, A_, B_, C_;
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
		std::cout << std::endl;
		Figure::print_info();
		std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
		std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl << std::endl;
	}

protected:
	int d_, D_;
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
};


class RectangularTriangle : public Triangle
{
public:
	RectangularTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		name = "Прямоугольный треугольник";
	};

};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)  {
		name = "Равнобедренный треугольник";
	};

protected:
	bool check() override {
		if (Triangle::check() && a_ == c_ && A_ == C_)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
};

class EquilateralTriangle : public IsoscelesTriangle
{
public:
	EquilateralTriangle(int a, int b, int c, int A, int B, int C) : IsoscelesTriangle(a, b, c, A, B, C) {
		name = "Равносторонний треугольник";
	};

protected:
	bool check() override {
		if (IsoscelesTriangle::check() && a_ == b_ && A_ == B_)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};



class Rectangle : public Quadrangle
{
public:
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) 
	{
		name = "Прямоугольник";
	};

protected:
	bool check() override {

		if (Quadrangle::check() && a_ == c_ && b_ == d_ && A_ == B_ && B_ == C_ && C_ == D_  && D_ == 90)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};



class Square : public Rectangle
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D)
	{
		name = "Квадрат";
	};

protected:
	bool check() override
	{
		if (Rectangle::check() && a_ == b_)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


class Parallelogram : public Rectangle
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D)
	{
		name = "Параллелограмм";
	};

protected:
	bool check() override
	{
		if (Quadrangle::check() && a_ == c_ && b_ == d_ && A_ == C_ && B_ == D_)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};


class Rhomb : public Parallelogram
{
public:
	Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D)
	{
		name = "Ромб";
	};

protected:
	bool check() override
	{
		if (Quadrangle::check() && A_ == C_ && B_ == D_)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	Figure figure;
	Triangle triangle(10, 20, 30, 50, 60, 70);
	RectangularTriangle rectangularTriangleOne(10, 20, 30, 50, 60, 90);
	RectangularTriangle rectangularTriangleTwo(10, 20, 30, 50, 40, 90);
	IsoscelesTriangle isoscelesTriangle(10, 20, 10, 50, 60, 50);
	EquilateralTriangle equilateralTriangle(30, 30, 30, 60, 60, 60);


	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
	Square square(20, 20, 20, 20, 90, 90, 90, 90);
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);

	Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);

	figure.print_info();
	triangle.print_info();
	rectangularTriangleOne.print_info();
	rectangularTriangleTwo.print_info();
	isoscelesTriangle.print_info();
	equilateralTriangle.print_info();

	quadrangle.print_info();
	rectangle.print_info();
	square.print_info();
	parallelogram.print_info();
	rhomb.print_info();
	

}

