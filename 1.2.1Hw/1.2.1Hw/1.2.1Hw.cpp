#include <iostream>
#include <string>
#include <locale.h>

enum Seasons {
   ������ = 1,
   �������,
   ����,
   ������,
   ���,
   ����,
   ����,
   ������,
   ��������,
   �������,
   ������,
   �������

};

int main() {

   setlocale(LC_ALL, "Russian");
   int num = 1;

   while (num != 0) {

      std::cout << "������� ����� ������: ";
      std::cin >> num;

      if (num == 0) {
         std::cout << "�� ��������";
         return 1;
      }

      static_cast<Seasons>(num);
      switch (num) {
      case ������:
         std::cout << "������" << std::endl;
         break;
      case �������:
         std::cout << "�������" << std::endl;
         break;
      case ����:
         std::cout << "����" << std::endl;
         break;
      case ������:
         std::cout << "������" << std::endl;
         break;
      case ���:
         std::cout << "���" << std::endl;
         break;
      case ����:
         std::cout << "����" << std::endl;
         break;
      case ����:
         std::cout << "����" << std::endl;
         break;
      case ������:
         std::cout << "������" << std::endl;
         break;
      case ��������:
         std::cout << "��������" << std::endl;
         break;
      case �������:
         std::cout << "�������" << std::endl;
         break;
      case ������:
         std::cout << "������" << std::endl;
         break;
      case �������:
         std::cout << "�������" << std::endl;
         break;
      default:
         std::cout << "������������ �����! " << std::endl;
         break;
      }
   }

   return 0;
}
