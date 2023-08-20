#pragma once

#include <iostream>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);

	bool operator==(Fraction& b);
	bool operator!=(Fraction& b);
	bool operator<(Fraction& b);
	bool operator>(Fraction& b);
	bool operator<=(Fraction& b);
	bool operator>=(Fraction& b);
};
