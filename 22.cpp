//22) Реализовать класс «Дата». Поля: число, месяц, год.
//Конструкторы: конструктор для инициализации полей. При
//недопустимых параметрах объекта создается исключение. Для
//исключения создать класс, производный от out_of_range.
//Дополнительно созданный класс для исключения содержит поля
//класса «Дата» для недопустимого объекта и метод для печати всех
//данных. Продемонстрировать работу с объектами в случае




//возникновения исключения и без возникновения исключения


#include <iostream>
#include <stdexcept>



class WrongDate : std::out_of_range {

	private:
		int day, month,year;
	
	public: WrongDate(int d, int m, int y) : out_of_range("Wrong date"), day(d), month(m), year(y) {

			std::cout << "Wrong ! : " << d << " " << m << " " << y << std::endl;
		};


};



class Date {

private:
	int day, month,year;

public:
	Date(int d, int m, int y) {
		if (d > 31 || m > 12) throw WrongDate(d,m,y);
		day = d; month = m; year = y;
	
	};

	void print() {
	
		std::cout << day << "." << month << "." << year << std::endl;}



};

int main() {


Date rigt(26,05,2004);
try {
Date wrong(31,25,203);
}

catch (WrongDate) {std::cout << "the date was worng" << std::endl;}
rigt.print();


}
