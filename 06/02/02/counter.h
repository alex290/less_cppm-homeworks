#pragma once
class Counter
{
public:
	Counter();
	Counter(int numb);

	void upCounter(); // Увеличить счетчик
	void downCounter(); // Уменьшить счетчик

	int getCounter(); // Получить текущее значение счётчика

private:
	int countNumb;

};

