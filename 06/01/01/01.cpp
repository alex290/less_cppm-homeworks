#include <iostream>
#include "calc_math.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, calc;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> calc;

    switch (calc)
    {
    case 1:
        std::cout << a << " + " << b << " = " << summ(a, b) << std::endl;
        break;
    case 2:
        std::cout << a << " - " << b << " = " << subtraction(a, b) << std::endl;
        break;
    case 3:
        std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
        break;
    case 4:
        std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
        break;
    case 5:
        std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;
        break;
    default:
        break;
    }


}

