#include <iostream>
#include <windows.h>

int get_size(std::string str, int forbidden_length)
{
    int size = str.length();
	if (forbidden_length == size)
	{
		throw std::string{ "Вы ввели слово запретной длины! До свидания!" };
	}
	return size;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length;
    std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	while (true)
	{
		std::string str;
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
			std::cout << "Длина слова \"" << str << "\" равна " << get_size(str, forbidden_length) << std::endl;
		}
		catch (std::string& e)
		{
			std::cout << e << std::endl;
			return 0;
		}
	}
	return 0;
	
}
