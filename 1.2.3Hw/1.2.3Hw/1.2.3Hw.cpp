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
   std::cout << "�����: " << address.city << std::endl;
   std::cout << "�����: " << address.street << std::endl;
   std::cout << "����� ����: " << address.building << std::endl;
   std::cout << "����� ��������: " << address.apt << std::endl;
   std::cout << "������: " << address.index << std::endl;
}

int main()
{
   setlocale(LC_ALL, "");

   sAddress addressUserA{ "������", "�����", "12/1", 8, 123456 };
   sAddress addressUserB{ "������", "�������", "59/48", 143, 953769 };

   printAddress(addressUserA);
   std::cout << std::endl;
   printAddress(addressUserB);

   return 0;
}