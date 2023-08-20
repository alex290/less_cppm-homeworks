#pragma once

#include <iostream>
#include <numeric>
#include <string>

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

	Fraction operator+(Fraction& b);
	Fraction operator-(Fraction& b);
	Fraction operator*(Fraction& b);
	Fraction operator/(Fraction& b);

	Fraction operator++();
	Fraction operator--(int);

	std::string to_string();
};
