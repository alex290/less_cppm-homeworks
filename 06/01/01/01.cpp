#include <iostream>
#include "calc_math.h"

int main()
{
    int a, b, calc;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> calc;

    if (calc == 1 )
    {
        std::cout << a << " + " << b << " = " << summ(a, b) << std::endl;
    }
}

