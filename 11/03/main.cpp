#include <iostream>
#include "leaver.h"
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Leaver leaver;
    std::string name;
    std::cout << "¬ведите им€: ";
    std::cin >> name;
    std::cout << leaver.leave(name);
}
