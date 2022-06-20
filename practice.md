# Билет 1.Создать класс «целое число».Элементы класса:поле задает значение целого числа (статус доступа private),конструктор для инициализации поляметод для вычисления остатка от деления целого числа на 5.Создать 1 объект данного класса, вывести значение остатка от деления числа на 5.

```cpp
#include "iostream"

using namespace std;

class Integer
{
	int a;
public:
	Integer(int a)
	{
		this->a = a;
	}
	int task()
	{
		return this->a % 5;
	}
};

int main()
{
	int a;
	cout << "Enter integer:";
	cin >> a;
	Integer A(a);
	cout << A.task() << endl;

	system("pause");
	return 0;
}
```
# Билет 2.Создать класс «целое число».Элементы класса:поле задает значение целого числа (статус доступа private),конструктор для инициализации поля,метод для печати значения числа в шестнадцатеричной системе счисления.Создать 1 объект данного класса, вывести на печать значение числа в шестнадцатеричной системе счисления.
```cpp
#include <iostream>

using namespace std;

class intnum
{
int n;
public:
intnum(int n)
{
this->n = n;
}

void get()
{
cout << hex << n << endl;
}
};

int main()
{
intnum num(16);
num.get();

system("pause");
}
```

# Билет 3.Создать класс «символ».Элементы класса:поле задает символ (статус доступа private),конструктор для инициализации поля,метод для печати кода символа.Создать 1 объект данного класса, вывести на печать код символ.

```cpp
#include "iostream"

using namespace std;

class Symbol
{
	char a;
public:
	Symbol(char a)
	{
		this->a = a;
	}
	int codeSymbol()
	{
		return (int)(this->a);
	}
};

int main()
{
	char a;
	cout << "Enter symbol:";
	cin >> a;
	Symbol A(a);
	cout << A.codeSymbol() << endl;

	system("pause");
	return 0;
}
```
# Билет 4.Создать класс «угол (заданный в градусах)».Элементы класса: поле задает значение угла в градусах (статус доступа private),конструктор для инициализации поля,метод для вычисления синуса угла.Создать 1 объект данного класса, вывести значение синуса заданного угла.
```cpp
#include <iostream>

using namespace std;

class corner
{
int n;
public:
corner(int n)
{
this->n = n;
}
double sinus()
{
return sin(n * 3.1415926 / 180);
}
};

int main()
{
corner c(30);
cout << c.sinus() << endl;

system("pause");
}
```

# Билет 5.Создать класс «угол (заданный в градусах)».Элементы класса: поле задает значение угла в градусах (статус доступа private),конструктор для инициализации поля,метод для вычисления косинуса угла.Создать 1 объект данного класса, вывести значение косинуса заданного угла.
```cpp
#include "iostream"
#include "cmath"
#define M_PI 3.14159265358979323846
using namespace std;

class Angle
{
	double angle;
public:
	Angle(double angle)
	{
		this->angle = (angle * M_PI) / 180;
	}
	double cosine()
	{
		return cos(this->angle);
	}
};

int main()
{
	cout << "Enter angle:";
	double angle;
	cin >> angle;
	Angle A(angle);
	cout << A.cosine() << endl;

	system("pause");
	return 0;
}
```
# Билет 6.Создать класс «целое число».Элементы класса: поле задает значение целого числа (статус доступа private),конструктор для инициализации поля,метод, возвращающий 1, если число четное, и 0, в противном случае.Создать 1 объект данного класса, проверить четное ли число, вывести соответствующее сообщение.
```cpp
#include <iostream>

using namespace std;

class intnum
{
int n;
public:
intnum(int n)
{
this->n = n;
}
bool even()
{
if (n % 2 != 0)
{
return false;
}
else
{
return true;
}
}
};

int main()
{
intnum num(3);
cout << num.even() << endl;

system("pause");
}
```

# Билет 7.Создать класс «круг».Элементы класса: поле задает значение радиуса круга (статус доступа private),конструктор для инициализации поля,метод для вычисления площадь круга.Создать 1 объект данного класса, напечатать значение площади круга.
```cpp
#include "iostream"
#include "cmath"
#define M_PI 3.14159265358979323846
using namespace std;

class Circle
{
	double radius;
public:
	Circle(double radius)
	{
		this->radius = radius;
	}
	double areaCircle()
	{
		return M_PI * this->radius*this->radius;
	}
};

int main()
{
	double radius;
	cout << "Enter radius:";
	cin >> radius;
	Circle A(radius);
	cout << A.areaCircle() << endl;

	system("pause");
	return 0;
}
```
# Билет 8.Создать класс «окружность».Элементы класса: поле задает значение радиуса окружности (статус доступа private),конструктор для инициализации поля,метод для вычисления длины окружности.Создать 1 объект данного класса, напечатать значение длины окружности.
```cpp
#include <iostream>

using namespace std;

class circle
{
int n;
public:
circle(int n)
{
this->n = n;
}
double lenght()
{
return 2 * 3.1415926 * n;
}
};

int main()
{
circle num(2);
cout << num.lenght() << endl;

system("pause");
}
```

# Билет 9.Создать класс «квадрат».Элементы класса:поле задает значение длины стороны квадрата (статус доступа private),конструктор для инициализации поля,метод для вычисления площади квадрата.Создать 1 объект данного класса, напечатать значение площади квадрата.
```cpp
#include "iostream"

using namespace std;

class Square
{
	double a;
public:
	Square(double a)
	{
		this->a = a;
	}
	double areaSquare()
	{
		return this->a*this->a;
	}
};

int main()
{
	double a;
	cout << "Enter side:";
	cin >> a;
	Square A(a);
	cout << "Area Square: " << A.areaSquare() << endl;

	system("pause");
	return 0;
}
```

# Билет 10.Создать класс «квадрат».Элементы класса: поле задает значение длины стороны квадрата (статус доступа private),конструктор для инициализации поля,метод для вычисления периметра квадрата.Создать 1 объект данного класса, напечатать значение периметра квадрата.
```cpp
#include <iostream>

using namespace std;

class square
{
int n;
public:
square(int n)
{
this->n = n;
}
int S()
{
return 4 * n;
}
};

int main()
{
square num(9);
cout << num.S() << endl;

system("pause");
}
```

# Билет 11.Создать класс базовый класс «точка на плоскости»
```cpp
#include "iostream"

using namespace std;

class TwoDimensional
{
protected:
	double x;
	double y;
public:
	TwoDimensional()
	{
		this->x = 0.0;
		this->y = 0.0;
	}
	TwoDimensional(double x,double y)
	{
		this->x = x;
		this->y = y;
	}
	virtual void print() const
	{
		cout << "X:" << this->x << endl << "Y:" << this->y << endl;
	}
};

class ThreeDimensional:public TwoDimensional
{
	double z;
public:
	ThreeDimensional(double x,double y,double z):TwoDimensional(x,y)
	{
		this->z = z;
	}
	void print() const override
	{
		TwoDimensional::print();
		cout << "Z:" << this->z << endl;
	}
};

int main()
{
	TwoDimensional *k;
	TwoDimensional a(3.5, 4.5);
	ThreeDimensional b(3.5, 4.6, 6.8);
	k = &a;
	k->print();
	k = &b;
	k->print();

	system("pause");
	return 0;
}
```

# Билет 12.Создать класс базовый класс «вектор на плоскости».Создать производный класс «вектор в трехмерном пространстве».
```cpp
#include <iostream>

using namespace std;

class vector_in_2d
{
protected:
double x;
double y;
public:
vector_in_2d() {};
vector_in_2d(double x, double y)
{
this->x = x;
this->y = y;
}

virtual int lenght()
{
return sqrt(x * x + y * y);
}

virtual void print()
{
cout << x << endl << y << endl << lenght() << endl;
}
};

class vector_in_3d : public vector_in_2d
{
double z;
public:
vector_in_3d(double x, double y, double z) : vector_in_2d(x, y)
{
this->z = z;
}

int lenght()
{
return sqrt(x * x + y * y + z * z);
}

void print()
{
cout << z << endl;
vector_in_2d::print();
}
};

int main()
{
double a = 3, b = 4, c = 12;
vector_in_2d *p = new vector_in_2d(a, b);
p->print();
cout << endl;
vector_in_2d *v = new vector_in_3d(a, b, c);
v->print();

system("pause");
}
```

# Билет 13.Создать класс базовый класс «квадрат».Создать производный класс «куб».
```cpp
#include "iostream"

using namespace std;

class Square
{
	double a;
public:
	Square()
	{
		this->a = 0.0;
	}
	Square(double a)
	{
		this->a = a;
	}
	double getSide() const
	{
		return this->a;
	}
	virtual double areaSquare()
	{
		return this->a*this->a;
	}
	virtual void print() 
	{
		cout << "Side length: " << this->a << endl << "Square area: " << this->areaSquare() << endl;
	}
};

class Cube:public Square
{
public:
	Cube(double a) :Square(a) {};
	double areaSquare() override
	{
		return Square::areaSquare() * Square::getSide();
	}
	void print() override
	{
		cout << "Side length: " << Square::getSide() << endl << "Capacity: " << this->areaSquare() << endl;
	}
};

int main()
{
	Square *k;
	Square A(2.0);
	k = &A;
	k->print();
	Cube B(2.0);
	k = &B;
	k->print();

	system("pause");
	return 0;
}
```

# Билет 14.Создать класс базовый класс «прямоугольник».Создать производный класс «прямоугольный параллелепипед».
```cpp
#include <iostream>

using namespace std;

class rect
{
int a;
int b;
public:
rect() {};
rect(int a, int b)
{
this->a = a;
this->b = b;
}

virtual int S()
{
return a * b;
}

virtual void print()
{
cout << a << endl << b << endl << S() << endl;
}
};

class ppd : public rect
{
int c;
public:
ppd(int a, int b, int c) : rect(a, b)
{
this->c = c;
}

int S()
{
return rect::S()*c;
}

void print()
{
cout << c << endl;
rect::print();
}
};

int main()
{
int a = 1, b = 2, c = 3;
rect *r = new rect(a,b);
r->print();
cout << endl;
rect *p = new ppd(a,b,c);
p->print();

system("pause");
}
```

# Билет 15.Создать класс базовый класс «круг».Создать производный класс «шар».
```cpp
#include "iostream"
#define M_PI 3.14
using namespace std;

class Circle
{
	double radius;
public:
	Circle()
	{
		this->radius = 0.0;
	}
	Circle(double radius)
	{
		this->radius = radius;
	}
	double getRadius() 
	{
		return this->radius;
	}
	virtual double area()
	{
		return M_PI * this->radius*this->radius;
	}
	virtual void print()
	{
		cout << "Side length:" << this->radius << endl << "Area: " << this->area() << endl;
	}
};

class Sphere:public Circle
{
public:
	Sphere(double radius) :Circle(radius) {};
	double area() override
	{
		return (4 / 3)*Circle::area()*Circle::getRadius();
	};
	void print() override
	{
		cout << "Side length:" << Circle::getRadius() << endl << "Area:" << this->area() << endl;
	};
};

int main()
{
	Circle *k;
	Circle A(4.5);
	k = &A;
	k->print();
	Sphere B(4.7);
	k = &B;
	k->print();

	system("pause");
	return 0;
}
```

# Билет 16.Создать класс базовый класс «автомобиль».Создать производный класс «грузовой автомобиль».
```cpp
#include <iostream>
#include <string>

using namespace std;

class car
{
string name;
int vmax;
public:
car() {};
car(string name, int vmax)
{
this->name = name;
this->vmax = vmax;
}

virtual void print()
{
cout << name << endl << vmax << endl;
}
};

class truck : public car
{
int weightability;
public:
truck(string name, int vmax, int weightability) : car(name, vmax)
{
this->weightability = weightability;
}
void print()
{
cout << weightability << endl;
car::print();
}
};

int main()
{
string c = "car";
int a = 250, b = 1000;
car *p = new car(c, a);
p->print();
cout << endl;
car *v = new truck(c, a, b);
v->print();

system("pause");
}
```

# Билет 17.Создать класс базовый класс «вещественное число».Создать производный класс «комплексное число».
```cpp
#include "iostream"
#include "cmath"
using namespace std;

class Number
{
	double number;
public:
	Number()
	{
		this->number = 0.0;
	}
	Number(double number)
	{
		this->number = number;
	}
	double getNumber()
	{
		return this->number;
	}
	virtual double module()
	{
		return fabs(this->number);
	}
	virtual void print()
	{
		cout << "Number: " << this->number << endl << "Module: " << this->module() << endl;
	}
};

class CompNumber:public Number
{
	double imaPart;
public:
	CompNumber(double number,double imaPart):Number(number)
	{
		this->imaPart = imaPart;
	}
	double module() override
	{
		return pow((this->imaPart*this->imaPart + Number::getNumber()*Number::getNumber()), 0.5);
	};
	void print() override
	{
		Number::print();
	};
};

int main()
{
	Number *k;
	Number A(-4.5);
	CompNumber B(4.5, 1);
	k = &A;
	k->print();
	k = &B;
	k->print();

	system("pause");
	return 0;
}
```

# Билет 18.Создать класс базовый класс «сотрудник компании».Создать производный класс «начальник подразделения компании».
```cpp
#include <iostream>
#include <string>

using namespace std;

class worker
{
string fio;
protected:
int salary;
public:
worker() {};
worker(string fio, int salary)
{
this->fio = fio;
this->salary = salary;
}
virtual void print()
{
cout << fio << endl << salary << endl;
}
};

class director : public worker
{
int increase;
public:
director(string fio, int salary, int increase) : worker(fio, salary)
{
this->increase = increase;
}
void print()
{
salary += increase;
worker::print();
}
};

int main()
{
string s = "Ivanov Ivan Ivanovich";
int salary = 10000, increase = 5000;
worker *w = new worker(s, salary);
w->print();
cout << endl;
worker *d = new director(s, salary, increase);
d->print();

system("pause");
}
```

# Билет 19.Создать класс базовый класс «вектор на плоскости».Создать производный класс «вектор в трехмерном пространстве».
```cpp
#include "iostream"
#include "cmath"
using namespace std;

class VektNaPlti
{
protected:
	double x;
	double y;
public:
	VektNaPlti()
	{
		this->x = 0.0;
		this->y = 0.0;
	}
	VektNaPlti(double x,double y)
	{
		this->x = x;
		this->y = y;
	}
	virtual void print()
	{
		cout << "X:" << this->x << endl << "Y:" << this->y << endl;
	}
};

class VektTre:public VektNaPlti
{
	double z;
public:
	VektTre(double x,double y,double z):VektNaPlti(x,y)
	{
		this->z = z;
	}
	void print() override
	{
		VektNaPlti::print();
		cout << "Z:" << this->z << endl;
	};
};

int main()
{
	VektNaPlti *k;
	VektNaPlti A(4.5, 4.4);
	k = &A;
	k->print();
	VektTre B(4.4, 4.5, 4.6);
	k = &B;
	k->print();

	system("pause");
	return 0;
}
```

# Билет 20.Создать класс базовый класс «квадрат».Создать производный класс «прямоугольник».
```cpp
#include <iostream>

using namespace std;

class square
{
int a;
public:
square() {};
square(int a)
{
this->a = a;
}
virtual int perimetr()
{
return a * 4;
}
virtual void print()
{
cout << a << endl << perimetr() << endl;
}
};

class rect : public square
{
int b;
public:
rect(int a, int b) : square(a)
{
this->b = b;
}
int perimetr()
{
int a = square::perimetr() / 4;
return (a + b) * 2;
}
void print()
{
cout << b << endl;
square::print();
}
};

int main()
{
int a = 4, b = 5;
square *s = new square(a);
s->print();
cout << endl;
square *r = new rect(a, b);
r->print();

system("pause");
}
```

# Билет 21.Реализовать класс «Время». 
```cpp
#include "iostream"
#include "exception"
using namespace std;

class Except:public exception
{
public:
	const char* what() const noexcept
	{
		return "Error!";
	}
};

class Time
{
	int hour;
	int minute;
	int second;
public:
	Time(int hour,int minute,int second)
	{
		if (hour >= 24)
			throw Except();
		else if (minute >= 60)
			throw Except();
		else if (second >= 60)
			throw Except();

		this->hour = hour;
		this->minute = minute;
		this->second = second;
		cout << "correct" << endl;
	}
};

int main()
{
	try
	{
		Time A(23, 60, 50);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Time B(20, 50, 50);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	system("pause");
	return 0;
}
```
# Билет 23.Разработать функцию для печати n первых значений натуральных чисел (1, 2, 3, …, n), параметры функции: n и имя потока.
```cpp
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <string>

std::mutex gMutex;

void printNumbers(int n, const std::string &name)
{
    for (int i = 0; i < n; i++) {
        std::lock_guard<std::mutex> lock(gMutex);
        std::cout << name << ": " << i << std::endl;
    }
}

int main()
{
    static const int N = 1000;
    static const std::vector<std::string> threadNames = {
        "thread1",
        "thread2"
    };

    std::vector<std::thread *> threads(threadNames.size());
    for (int i = 0; i < threadNames.size(); i++) {
        threads[i] = new std::thread(printNumbers, N, std::ref(threadNames[i]));
    }

    for (std::thread *thread : threads) {
        thread->join();
    }

    return 0;
}
```

# Билет 25.Разработать функцию для печати n первых значений натуральных чисел (1, 2, 3, …, n), параметры функции: n и имя потока.(объект класса std::condition_variable)
```cpp
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <string>
#include <condition_variable>

std::condition_variable cv;
std::mutex gMutex;
bool isDone = false;

void printNumbers(int n, const std::string &name)
{
    std::unique_lock<std::mutex> lock(gMutex);
    for (int i = 0; i < n; i++) {
        std::cout << name << ": " << i << std::endl;
    }

    isDone = true;
    cv.notify_one();
}

int main()
{
    static const int N = 1000;
    static const std::string NAME = "thread1";

    std::thread thread(printNumbers, N, std::ref(NAME));
    std::unique_lock<std::mutex> lock(gMutex);

    while (!isDone) {
        cv.wait(lock);
    }

    thread.join();      // Ждем, пока оно деструкторы довыполняет т.п.
    std::cout << "Done!" << std::endl;

    return 0;
}
```
