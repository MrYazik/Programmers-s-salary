#include <iostream>

using std::cout;
using std::endl;
using std::cin;

double hours = 0;
double money = 0;

int main()
{
    std::cout << " " << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "Введите количество времени которое вы работаете (в часах): ";
    std::cin >> hours;
    std::cout << "Введите количество денег которое вы заработали (в рублях): ";
    std::cin >> money;
    std::cout << " " << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "В час в зарабатываете: " << (money / hours);
    std::cout << " " << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << " " << std::endl; 
}