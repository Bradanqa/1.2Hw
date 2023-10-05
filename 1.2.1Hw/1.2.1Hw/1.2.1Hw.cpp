#include <iostream>
#include <string>
#include <locale.h>

enum Seasons {
   Январь = 1,
   Февраль,
   Март,
   Апрель,
   Май,
   Июнь,
   Июль,
   Август,
   Сентябрь,
   Октябрь,
   Ноябрь,
   Декабрь

};

int main() {

   setlocale(LC_ALL, "Russian");
   int num = 1;

   while (num != 0) {

      std::cout << "Введите номер месяца: ";
      std::cin >> num;

      if (num == 0) {
         std::cout << "До свидания";
         return 1;
      }

      static_cast<Seasons>(num);
      switch (num) {
      case Январь:
         std::cout << "Январь" << std::endl;
         break;
      case Февраль:
         std::cout << "Февраль" << std::endl;
         break;
      case Март:
         std::cout << "Март" << std::endl;
         break;
      case Апрель:
         std::cout << "Апрель" << std::endl;
         break;
      case Май:
         std::cout << "Май" << std::endl;
         break;
      case Июнь:
         std::cout << "Июнь" << std::endl;
         break;
      case Июль:
         std::cout << "Июль" << std::endl;
         break;
      case Август:
         std::cout << "Август" << std::endl;
         break;
      case Сентябрь:
         std::cout << "Сентябрь" << std::endl;
         break;
      case Октябрь:
         std::cout << "Октябрь" << std::endl;
         break;
      case Ноябрь:
         std::cout << "Ноябрь" << std::endl;
         break;
      case Декабрь:
         std::cout << "Декабрь" << std::endl;
         break;
      default:
         std::cout << "Неправильный номер! " << std::endl;
         break;
      }
   }

   return 0;
}
