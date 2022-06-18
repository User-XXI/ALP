//21) Реализовать класс «Время». Поля: часы, минуты, секунды.
//Конструкторы: конструктор для инициализации полей. При
//недопустимых параметрах объекта создается исключение. Для
//исключения создать класс, производный от out_of_range.
//Дополнительно созданный класс для исключения содержит поля
//класса «Время» для недопустимого объекта и метод для печати всех
//данных. Продемонстрировать работу с объектами в случае
//возникновения исключения и без возникновения исключения.
#include <stdexcept>
#include <iostream>
class IncorrectTime : std::out_of_range {
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		IncorrectTime( int h, int m, int s) : out_of_range("Incorrect time"),
                                                                     hours(h),
                                                                     minutes(m), seconds(s) {
            std::cout << "WRONG ! : " << h << " " << m << " " << s << std::endl;
        };


};


class Time {
private:
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    
public:
    Time(int h, int m, int s) {
	    if ( h > 24 || m > 59 || s > 59) throw IncorrectTime(h,m,s);
        hours =h;
        minutes = m;
        seconds = s;
    };

    void print(){
        std::cout << hours << " "<< minutes << " " << seconds << " " << std::endl;
    }


};


int main() {
    Time today(23,55,44);
    try {
    Time wrong(23,69,45);
    }
    catch (IncorrectTime) {
	//std::cout << "wrong time";
    }
    today.print();
    //wrong.print();


}
