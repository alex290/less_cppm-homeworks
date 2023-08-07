#include <iostream>

class Calculator
{
public:
	Calculator()
	{
		num1 = 0;
		num2 = 0;
	};
	bool set_num1(double num1) {
		if (num1 == 0)
		{
			return false;
		}
		this->num1 = num1;
		return true;
	}

	bool set_num2(double num2) {
		if (num2 == 0)
		{
			return false;
		}
		this->num2 = num2;
		return true;
	}

	double add() {
		return num1 + num2;
	};

	double multiply() {
		return num1 * num2;
	};

	double subtract_1_2() {
		return num1 - num2;
	};

	double subtract_2_1() {
		return num2 - num1;
	};

	double divide_1_2() {
		return num1 / num2;
	};

	double divide_2_1() {
		return num2 / num1;
	};

private:
	double num1;
	double num2;

};


int main()
{
	setlocale(LC_ALL, "Russian");
	Calculator calculator;
	while (true)
	{
		double num1;
		double num2;
		bool inp = false;
		while (!inp)
		{
			std::cout << "Введите num1: ";
			std::cin >> num1;
			inp = calculator.set_num1(num1);
			if (!inp)
			{
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		inp = false;
		while (!inp)
		{
			std::cout << "Введите num2: ";
			std::cin >> num2;
			inp = calculator.set_num2(num2);
			if (!inp)
			{
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		std::cout << "num1 + num2 = " << calculator.add() << std::endl;
		std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
		
	}
    
}
