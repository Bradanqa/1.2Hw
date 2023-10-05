#include <iostream>
#include <string>
#include <clocale> 

struct bankAccount
{
   int accNumber = 0;
   std::string accName;
   double accBalance = 0.0;
};

void changeBalance(bankAccount &account, double newBalance) {
   account.accBalance = newBalance;
}

int main()
{
   setlocale(LC_ALL, "");

   double newBalance = 0;
   bankAccount Account;
   
   std::cout << "¬ведите номер счЄта: ";
   std::cin >> Account.accNumber;
   std::cout << "\n";

   std::cout << "¬ведите им€ владельца: ";
   std::cin >> Account.accName;
   std::cout << std::endl;

   std::cout << "¬ведите баланс: ";
   std::cin >> Account.accBalance;
   std::cout << std::endl;

   std::cout << "¬ведите новый баланс: ";
   std::cin >> newBalance;
   std::cout << std::endl;

   changeBalance(Account, newBalance);

   std::cout << "¬аш счет: " << Account.accName << ", " << Account.accNumber << ", " << Account.accBalance;

   return 0;
}
