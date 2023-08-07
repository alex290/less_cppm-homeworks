#include <iostream>
#include <clocale>
#include <Windows.h>

struct BankAccount
{
    long accountNumber{};
    std::string name;
    double balance{};
};

void accountBalanceChanges(BankAccount& bankAccount, double balance)
{
    bankAccount.balance = balance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BankAccount bankAccount;

    std::cout << "Введите номер счёта: ";
    std::cin >> bankAccount.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> bankAccount.name;

    double balance;
    std::cout << "Введите баланс: ";
    std::cin >> balance;

    accountBalanceChanges(bankAccount, balance);

    std::cout << "Введите новый баланс: ";
    std::cin >> balance;

    accountBalanceChanges(bankAccount, balance);

    std::cout << "Ваш счёт: " << bankAccount.name << ", " << bankAccount.accountNumber << ", " << bankAccount.balance << std::endl;

}

