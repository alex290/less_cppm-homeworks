#pragma once
#include "triangle.h"
class Quadrangle : public Triangle
{
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	int get_d();
	int get_D();

	void print_info() override;

	virtual void exp_figure_quadrangle();

protected:
	int d_, D_;
};

