//23) Разработать функцию для печати n первых значений натуральных
//чисел (1, 2, 3, ..., n), параметры функции: n и имя потока. Функция
//печатает имя потока и значение очередного числа на одной строке,
//далее переход на новую строку. Создать два разных потока для печати
//двух последовательностей одновременно, обеспечить синхронизацию
//при печати каждой строки текста (строка печатается потоком
//полностью, исключить возможность вставки в нее данных другого
//потока).

#include <string>
#include <iostream>
#include <thread>
#include <future>
#include <mutex>


std::mutex mutex;


void print(int n, const std::string &tname) {
    for (size_t x = 1; x < n + 1; ++x) {
        mutex.lock();
        std::cout << tname << " " << x << std::endl;
        mutex.unlock();
    }
}

int main() {
    std::thread thread1(print, 50, "thread1");
    std::thread thread2(print, 50, "thread2");
    thread1.join();
    thread2.join();
}