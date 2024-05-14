#include <iostream>

// Подключение пространств имён

using std::cout;
using std::endl;
using std::cin;

// Переменные

double hours = 0;
long double money = 0;

int main()
{
    std::cout << " " << std::endl;
    std::cout << "-----" << std::endl;

    // Вопросы для начала вычесления

    std::cout << "Введите количество времени которое вы работаете (в часах): ";
    std::cin >> hours;
    std::cout << "Введите количество денег которое вы заработали (в рублях): ";
    std::cin >> money;

    std::cout << " " << std::endl;
    std::cout << "-----" << std::endl;

    // Вывод + вычисления

    std::cout << "В секунду вы зарабатываете: " << (money * (hours / 60 / 60)) << endl;
    std::cout << "В минуту вы зарабатываете: " << (money * (hours / 60)) << endl;
    std::cout << "В час вы зарабатываете: " << (money / hours) << endl;
    std::cout << "В неделю вы зарабатываете: " << (money / hours * 24) * 7 << endl;
    std::cout << "В месяц вы зарабатываете: " << (money * (hours * 24 * 7 * 4)) << endl;
    std::cout << "В год вы зарабатываете: " << (money * (hours * 24 * 365)) << endl;


    std::cout << " " << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << " " << std::endl; 
}