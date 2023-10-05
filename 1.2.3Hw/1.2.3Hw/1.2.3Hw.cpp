#include <iostream>
#include <string>
#include <clocale> 

struct sAddress
{
   std::string city;
   std::string street;
   std::string building;
   int apt;
   int index;
};

void printAddress(sAddress &address) {
   std::cout << "Город: " << address.city << std::endl;
   std::cout << "Улица: " << address.street << std::endl;
   std::cout << "Номер дома: " << address.building << std::endl;
   std::cout << "Номер квартиры: " << address.apt << std::endl;
   std::cout << "Индекс: " << address.index << std::endl;
}

int main()
{
   setlocale(LC_ALL, "");

   sAddress addressUserA{ "Москва", "Арбат", "12/1", 8, 123456 };
   sAddress addressUserB{ "Ижевск", "Пушкина", "59/48", 143, 953769 };

   printAddress(addressUserA);
   std::cout << std::endl;
   printAddress(addressUserB);

   return 0;
}