#include "fraction.h"
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, denom1, num2, denom2;
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> num1;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> denom1;
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> num2;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> denom2;

    Fraction f1(num1, denom1);
    Fraction f2(num2, denom2);

    Fraction result = f1 + f2;
    std::cout << num1 << "/" << denom1 << " + " << num2 << "/" << denom2 << " = " << result.get_numerator() << "/" << result.get_denominator() << '\n';

    result = f1 - f2;
    std::cout << num1 << "/" << denom1 << " - " << num2 << "/" << denom2 << " = " << result.get_numerator() << "/" << result.get_denominator() << '\n';

    result = f1 * f2;
    std::cout << num1 << "/" << denom1 << " * " << num2 << "/" << denom2 << " = " << result.get_numerator() << "/" << result.get_denominator() << '\n';

    result = f1 / f2;
    std::cout << num1 << "/" << denom1 << " / " << num2 << "/" << denom2 << " = " << result.get_numerator() << "/" << result.get_denominator() << '\n';

    result = ++f1 * f2;
    std::cout << "++" << num1 << "/" << denom1 << " * " << num2 << "/" << denom2 << " = " << result.get_numerator() << "/" << result.get_denominator() << '\n';

    std::cout << "Значение дроби 1 = " << f1.get_numerator() << "/" << f1.get_denominator() << '\n';

    result = f1-- * f2;
    std::cout << num1 << "/" << denom1 << "-- * " << num2 << "/" << denom2 << " = " << result.get_numerator() << "/" << result.get_denominator() << '\n';

    std::cout << "Значение дроби 1 = " << f1.get_numerator() << "/" << f1.get_denominator() << '\n';

}


