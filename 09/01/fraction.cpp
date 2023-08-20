#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

bool Fraction::operator==(Fraction& b)
{
	int numb = std::lcm(this->denominator_, b.denominator_);
	if ((this->numerator_ * (numb / this->denominator_)) == (b.numerator_ * (numb / b.denominator_)))
	{
		return true;
	}
	return false;
}

bool Fraction::operator!=(Fraction& b)
{
	return !(*this == b);
}

bool Fraction::operator<(Fraction& b)
{
	int numb = std::lcm(this->denominator_, b.denominator_);
	if ((this->numerator_ * (numb / this->denominator_)) < (b.numerator_ * (numb / b.denominator_)))
	{
		return true;
	}
	return false;
}

bool Fraction::operator>(Fraction& b)
{
	if (!(*this < b) && (*this != b))
	{
		return true;
	}
	return false;
}

bool Fraction::operator<=(Fraction& b)
{
	if ((*this < b) || (*this == b))
	{
		return true;
	}
	return false;
}

bool Fraction::operator>=(Fraction& b)
{
	if ((*this > b) || (*this == b))
	{
		return true;
	}
	return false;
}
