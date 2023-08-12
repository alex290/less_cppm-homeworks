#include <iostream>
#include <windows.h>
#include "counter.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string inpText;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> inpText;
	Counter counter;
	if (inpText == "да")
	{
		int startNumb;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> startNumb;

		counter = Counter(startNumb);
	}


	while (inpText != "x") {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> inpText;
		if (inpText == "+")
		{
			counter.upCounter();
		}
		else if (inpText == "-")
		{
			counter.downCounter();
		}
		else if (inpText == "=")
		{
			std::cout << counter.getCounter() << std::endl;
		}
		else if (inpText == "x")
		{
			std::cout << "До свидания!" << std::endl;
		}
	}
}


