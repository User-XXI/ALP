#include <iostream>

/* Создать класс «целое число».
 * Элементы класса: поле задает
 * значение целого числа (статус доступа private);
 * конструктор для инициализации поля;
 * метод для вычисления остатка от деления целого числа на 5.
 * Создать 1 объект данного класса, вывести значение остатка от деления числа на 5. */


class Int {
private:
    int num;
public:
    Int(int num) : num(num) {};

    int getter() {
        return this->num;
    }

    int mod() {
        return this->num % 5;
    }
};

int main() {
    Int test(7);
    std::cout << test.getter() << " mod : " << test.mod();

}