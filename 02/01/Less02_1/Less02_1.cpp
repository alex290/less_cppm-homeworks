#include <iostream>

enum Month
{
    None,
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};

std::string montToString(Month &month)
{
    switch (month)
    {
    case None:
        return "До свидания";
    case January:
        return "Январь";
    case February:
        return "Февраль";
    case March:
        return "Март";
    case April:
        return "Апрель";
    case May:
        return "Май";
    case June:
        return "Июнь";
    case July:
        return "Июль";
    case August:
        return "Август";
    case September:
        return "Сентябрь";
    case October:
        return "Октябрь";
    case November:
        return "Ноябрь";
    case December:
        return "Декабрь";
    default:
        break;
    }
    return "Неправильный номер!";
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Month month = January;
    while (month != None)
    {
        int montInt;
        std::cout << "Введите номер месяца: ";
        std::cin >> montInt;
        month = static_cast<Month>(montInt);
        std::cout << montToString(month) << std::endl;
    }
    return 0;
}
