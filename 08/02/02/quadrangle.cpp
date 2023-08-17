#include "quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Triangle(a, b, c, A, B, C, false)
{
	count = 4;
	d_ = d;
	D_ = D;
	name = "��������������";
	exp_figure_quadrangle();
}


int Quadrangle::get_d()
{
	return d_;
}

int Quadrangle::get_D()
{
	return D_;
}

void Quadrangle::print_info()
{
	std::cout << "�������: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
	std::cout << "����: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl << std::endl;
}

void Quadrangle::exp_figure_quadrangle()
{
	if ((A_ + B_ + C_ + D_) != 360)
	{
		throw FugureException("������ �������� ������. �������: ����� ����� �� ����� 360\n");
	}
}
