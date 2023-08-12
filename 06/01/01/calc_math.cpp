#include "calc_math.h"

int summ(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

double division(int a, int b)
{
	return static_cast<double>(a) / b;
}

long long exponentiation(int a, int b)
{
	long long result = a;
	for (int i = 0; i < b; i++)
	{
		result = result * result;
	}
	return result;
}