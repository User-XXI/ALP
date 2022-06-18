//4) Создать класс «угол (заданный в градусах)».
//Элементы класса:
//поле задает значение угла в градусах (статус доступа private);
//конструктор для инициализации поля;
//метод для вычисления синуса угла.
#include <iostream>
#include "cmath"


class Sin {
private:
    float degree;

public:
    explicit Sin(float deg) : degree(deg){};

    float getSin() const{
        return std::sin(degree);
    }
};


int main() {
    Sin test(45);

    std::cout << test.getSin();
}