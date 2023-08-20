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

Fraction Fraction::operator+(Fraction& b)
{
	Fraction sum(0, 0);
	int numb = std::lcm(this->denominator_, b.denominator_);
	sum.denominator_ = numb;
	sum.numerator_ = (this->numerator_ * (numb / this->denominator_)) + (b.numerator_ * (numb / b.denominator_));
	int del = std::gcd(sum.numerator_, sum.denominator_);
	sum.denominator_ = sum.denominator_ / del;
	sum.numerator_ = sum.numerator_ / del;
	return sum;
}

Fraction Fraction::operator-(Fraction& b)
{
	Fraction result(0, 0);
	int numb = std::lcm(this->denominator_, b.denominator_);
	result.denominator_ = numb;
	result.numerator_ = (this->numerator_ * (numb / this->denominator_)) - (b.numerator_ * (numb / b.denominator_));
	int del = std::gcd(result.numerator_, result.denominator_);
	result.denominator_ = result.denominator_ / del;
	result.numerator_ = result.numerator_ / del;
	return result;
}

Fraction Fraction::operator*(Fraction& b)
{
	Fraction result(0, 0);

	result.denominator_ = this->denominator_ * b.denominator_;;
	result.numerator_ = this->numerator_ * b.numerator_;
	int del = std::gcd(result.numerator_, result.denominator_);
	result.denominator_ = result.denominator_ / del;
	result.numerator_ = result.numerator_ / del;
	return result;
}

Fraction Fraction::operator/(Fraction& b)
{
	Fraction result(0, 0);

	result.denominator_ = this->denominator_ * b.numerator_;;
	result.numerator_ = this->numerator_ * b.denominator_;
	int del = std::gcd(result.numerator_, result.denominator_);
	result.denominator_ = result.denominator_ / del;
	result.numerator_ = result.numerator_ / del;
	return result;
}

Fraction Fraction::operator++()
{
	this->numerator_ += this->denominator_;
	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction result = *this;
	this->numerator_ -= this->denominator_;
	return result;
}


std::string Fraction::to_string()
{
	return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}