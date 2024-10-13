#include <iostream>
#include "quizizz.h"

using namespace std;

int main() {
    system("chcp 1251>null");
    cout << "Розподіл файлу на декілька частин\n";
    cout << "\t\033[41mМеню\n1) Вікторина\n2) Телефонна книга\n";
    short choice, res;
    cin >> choice;
    switch (choice) {
    case 1:
        res = quizizz(); //основну функцію іншого файлу
        break;
    default: cout << "Невірний вибір"; break;
    }
    return 0;
}



