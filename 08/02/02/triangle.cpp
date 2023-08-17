#include "triangle.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C, bool is_gure)
{
	count = 3;
	a_ = a;
	b_ = b;
	c_ = c;
	A_ = A;
	B_ = B;
	C_ = C;
	name = "�����������";
	if (is_gure)
	{
		exp_figure();
	}
	
}

int Triangle::get_a()
{
	return a_;
}

int Triangle::get_b()
{
	return b_;
}

int Triangle::get_c()
{
	return c_;
}

int Triangle::get_A()
{
	return A_;
}

int Triangle::get_B()
{
	return B_;
}

int Triangle::get_C()
{
	return C_;
}

std::string Triangle::get_name()
{
	return name;
}

void Triangle::print_info()
{
	std::cout << "�������: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
	std::cout << "����: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl << std::endl;
}

void Triangle::exp_figure()
{
	if ((A_ + B_ + C_) != 180 && count == 3)
	{
		throw FugureException("������ �������� ������. �������: ����� ����� �� ����� 180\n");
	}
}
