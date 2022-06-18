//25) Разработать функцию для печати n первых значений натуральных
//чисел (1, 2, 3, ..., n), параметры функции: n и имя потока. Функция
//печатает имя потока и значение очередного числа на одной строке,
//далее переход на новую строку. Создать поток, используя эту
//функцию, при этом главный поток переходит в режим ожидания
//приема оповещения от дочернего потока. Дочерний поток после
//завершения печати посылает оповещение главному потоку, главный
//поток принимает оповещение и печатает сообщение об этом событии.
//Для посылки и приема оповещений использовать условную
//переменную (объект класса std::condition_variable).


#include <condition_variable>
#include <thread>
#include <iostream>
std::mutex mutex;
std::condition_variable conditionVariable;
bool flag = false;

void daughter(int n, const std::string &tname) {
    std::unique_lock<std::mutex> lock(mutex);

    while (!flag) conditionVariable.wait(lock);
    for (size_t x = 0; x < n ; ++x) {
        std::cout << tname << " " << random() % 100 << std::endl;
    }
    flag = false;
}

void parent(int n, const std::string &tname) {
    std::cout << tname << "STARTING ! " << std::endl;
    for (size_t x = 0; x < 10 ; ++x) {
        std::cout << tname << " " << x << std::endl;
    }
    std::cout << tname << " FINISHED? NOTIFY CF" << std::endl;
    flag = true;
    conditionVariable.notify_all();
}

int main() {
    std::thread thread1(parent, 50, "thread1");
    std::thread thread2(daughter, 50, "thread2");
    thread1.join();
    thread2.join();
}