#pragma once
#include "triangle.h"
class Quadrangle : public Triangle
{
public:
	FIGURE_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	FIGURE_API int get_d();
	FIGURE_API int get_D();

	FIGURE_API void print_info() override;

protected:
	int d_, D_;
};

