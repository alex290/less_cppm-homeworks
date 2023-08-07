#include <iostream>
#include <clocale>
#include <Windows.h>

struct Address
{
    std::string city; // Город
    std::string street; // Улица
    std::string house; // Номер дома (строка потому что в номере может быть буква)
    int apartment; // Номер квартиры
    int index; // Индекс
};

void printAddress(Address& address)
{
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.house << std::endl;
    std::cout << "Номер квартиры: " << address.apartment << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Address address;
    std::cout << "Город: ";
    std::cin >> address.city;

    std::cout << "Улица: ";
    std::cin >> address.street;

    std::cout << "Номер дома: ";
    std::cin >> address.house;

    std::cout << "Номер квартиры: ";
    std::cin >> address.apartment;

    std::cout << "Индекс: ";
    std::cin >> address.index;

    std::cout << std::endl;

    printAddress(address);

    return 0;

}

