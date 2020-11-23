#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    int n, m;
    cout << "Введите достоинство карты (N): ";
    cin >> n;
    cout << "Введите масть карты (M): ";
    cin >> m;
    switch (n)
    {
    case 6:
        cout << "Шестерка";
        break;
    case 7:
        cout << "Семерка";
        break;
    case 8:
        cout << "Восьмерка";
        break;
    case 9:
        cout << "Девятка";
        break;
    case 10:
        cout << "Десятка";
        break;
    case 11:
        cout << "Валет";
        break;
    case 12:
        cout << "Дама";
        break;
    case 13:
        cout << "Король";
        break;
    case 14:
        cout << "Туз";
        break;
    }
    switch (m)
    {
    case 1:
        cout << " Пик";
        break;
    case 2:
        cout << " Треф";
        break;
    case 3:
        cout << " Бубен";
        break;
    case 4:
        cout << " Червей";
        break;
    }

    return 0;
}
