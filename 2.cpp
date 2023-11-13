#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    char station;
    cout << "Введите букву станции:";
    cin >> station;
    switch (station) {

    case'a':
    case'A':
        cout << "Время в пути до станции " << station << "Составляет 6 минут." << endl;
        break;

    case'b':
    case'B':
        cout << "Время в пути до станции " << station << "Составляет 15 минут." << endl;
        break;

    case'c':
    case'C':
        cout << "Время в пути до станции " << station << "Составляет 25 минут." << endl;
        break;

    case'd':
    case'D':
        cout << "Время в пути до станции " << station << "Составляет 28 минут." << endl;
        break;

    case'e':
    case'E':
        cout << "Время в пути до станции " << station << "Составляет 30 минут." << endl;
        break;
        cout << "Ошибка,нет информации по этой станции" << endl;
        break;
    }
}
