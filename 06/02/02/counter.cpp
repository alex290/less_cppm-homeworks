#include "counter.h"

Counter::Counter()
{
	countNumb = 1;
}

Counter::Counter(int numb)
{
	countNumb = numb;
}

void Counter::upCounter()
{
	countNumb++;
}

void Counter::downCounter()
{
	countNumb--;
}

int Counter::getCounter()
{
	return countNumb;
}
