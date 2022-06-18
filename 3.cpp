//3) Создать класс «символ».
//Элементы класса:
//поле задает символ (статус доступа private);
//конструктор для инициализации поля;
//метод для печати кода символа.

#include <iostream>

class Char{
private:
    char ch;
public:
    explicit Char(char ch) : ch(ch){};

    size_t getC() const{
        return static_cast<size_t>( this->ch);
    }
};


int main() {
    Char ch('0');

    std::cout << ch.getC();
}