//24) Разработать функцию для печати n значений псевдослучайных
//чисел (ПСЧ), параметры функции: n и имя потока. Функция печатает
//имя потока и значение очередного ПСЧ на одной строке, далее переход
//на новую строку. Создать два разных потока для печати двух
//последовательностей ПСЧ, обеспечить синхронизацию при печати
//каждой строки текста (строка печатается потоком полностью,
//исключить возможность вставки в нее данных другого потока).

#include <thread>
#include <iostream>
#include <random>
#include <mutex>
#include <ctime>
#include <mutex>

std::mutex mutex;


void print(int n, const std::string &tname) {
    for (size_t x = 0; x < n ; ++x) {
        mutex.lock();
        std::cout << tname << " " << random() % 100 << std::endl;
        mutex.unlock();
    }
}

int main() {
    std::thread thread1(print, 50, "thread1");
    std::thread thread2(print, 50, "thread2");
    thread1.join();
    thread2.join();
}