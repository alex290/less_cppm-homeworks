#include <iostream>
#include <windows.h>

class Counter
{
public:
	Counter() { countNumb = 1; };
	Counter(int numb) { countNumb = numb; };

	void upCounter() { countNumb++; }; // Увеличить счетчик
	void downCounter() { countNumb--; }; // Уменьшить счетчик

	int getCounter() { return countNumb; }; // Получить текущее значение счётчика

private:
	int countNumb;

};


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
		} else if (inpText == "-")
		{
			counter.downCounter();
		} else if (inpText == "=")
		{
			std::cout << counter.getCounter() << std::endl;
		}
		else if (inpText == "x")
		{
			std::cout << "До свидания!" << std::endl;
		}
	}
}

