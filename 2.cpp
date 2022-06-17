/*
 * Создать класс «целое число». Элементы класса: поле задает
 * значение целого числа (статус доступа private);
 * конструктор для инициализации поля;
 * метод для печати значения числа в шестнадцатеричной системе счисления.
 * Создать 1 объект данного класса, вывести на печать значение числа
 * в шестнадцатеричной системе счисления
 */
#include <string>
#include <iostream>
#include <sstream>

class Int {
private:
    int num;

public:
    Int(int num): num(num){};

    int getter(){ return this->num;}


    std::string Hex() const{
        std::stringstream stream;
        stream << std::hex << this->num;
        return stream.str();

    }

    // Или сразу вывод :
      void hex() const {
      std::cout << std::hex << this->num;
        }
};

int main() {
    Int num(9485);
    std::cout << num.Hex() << " " ;
    num.hex();
}