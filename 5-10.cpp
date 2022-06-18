//5) Создать класс «угол (заданный в градусах)».
//Элементы класса:
//поле задает значение угла в градусах (статус доступа private);
//конструктор для инициализации поля;
//метод для вычисления косинуса угла.
//Создать 1 объект данного класса, вывести значение косинуса заданного угла.





//Создать 1 объект данного класса, напечатать значение площади круга.





//5
#include <iostream>
#include <cmath>


class Degree {
private:
    float degree;

public:
    explicit Degree(float deg) : degree(deg) {};

    float Cos() const {
        return std::cos(degree);
    }
};

////6) Создать класс «целое число».
////Элементы класса:
////поле задает значение целого числа (статус доступа private);
////конструктор для инициализации поля;
////метод, возвращающий 1, если число четное, и 0, в противном случае.
////Создать 1 объект данного класса, проверить четное ли число, вывести
////соответствующее сообщение.

class Int6 {
private:
    int number;
public:
    explicit Int6(int num) : number(num) {};

    bool isOdd() const {
        return !(this->number % 2);
    }
};

//7) Создать класс «круг».
//Элементы класса:
//поле задает значение радиуса круга (статус доступа private);
//конструктор для инициализации поля;
//метод для вычисления площадь круга.



class Circle {
private:
    float radius;
public:
    explicit Circle(float R) : radius(R) {};


    float area() const {
        return M_PI * radius * radius;
    };

};

//8) Создать класс «окружность».
//Элементы класса:
//поле задает значение радиуса окружности (статус доступа private);
//конструктор для инициализации поля;
//метод для вычисления длины окружности.
//Создать 1 объект данного класса, напечатать значение длины окружности.

class Circle2 {

private:
    double radius;
public:
    explicit Circle2(double R) : radius(R) {};

    double getLength() const  {
        return 2.0 * M_PI * radius;
    }
};


//9) Создать класс «квадрат».
//Элементы класса:
//поле задает значение длины стороны квадрата (статус доступа private);
//конструктор для инициализации поля;
//метод для вычисления площади квадрата.
//Создать 1 объект данного класса, напечатать значение площади квадрата.

class Square {
private:
    double side;

public:
    explicit Square(double side) : side(side){};

    double area() const {
        return side * side;
    }
};

//10) Создать класс «квадрат».
//Элементы класса:
//поле задает значение длины стороны квадрата (статус доступа private);
//конструктор для инициализации поля;
//метод для вычисления периметра квадрата.

class Square2 {
private:
    double side;

public:
    explicit Square2(double side) : side(side){};

    double perimeter() const {
        return 4 * side;
    }
};


int main() {
    // ----- 5 -----
    Degree test(45);
    std::cout << test.Cos() << std::endl;

    // ----- 6 -----
    Int6 test6(4);
    std::cout << test6.isOdd() << std::endl;

    // ----- 7 -----
    Circle test7(4);
    std::cout << test7.area() << std::endl;

    // ----- 8 -----
    Circle2 test8(5);
    std::cout << test8.getLength() << std::endl;

    // ----- 9 ------
    Square test9(5);
    std::cout << test9.area() << std::endl;

    // ----- 10 -----
    Square2 test10(5);
    std::cout << test10.perimeter() << std::endl;

}
