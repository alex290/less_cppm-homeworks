#define MODE 1

#ifdef MODE
#if MODE == 1
int add(int a, int b)
{
    return a + b;
}
#endif

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в боевом режиме\n";
#elif MODE == 1
    int a, b;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << add(a, b);
#else
    std::cout << "Неизвестный режим. Завершение работы\n";
#endif
    
}

#else
#error it is necessary to define MODE
#endif