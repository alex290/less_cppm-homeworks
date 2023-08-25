#include <iostream>
#include "greeter.h"
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter greeter;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << greeter.greet(name);
}

