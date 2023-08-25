#pragma once

#include <iostream>

class Triangle
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
	std::string get_name();

	virtual void print_info();

protected:
	int a_, b_, c_, A_, B_, C_;
	std::string name;
};

