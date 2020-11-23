
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "Введите число: ";
    cin >> x;
    if (x < 0)
        cout << "f(x) = 0";
    if (x % 2 == 0)
        cout << "f(x) = 1";
    if ((x % 2 != 0) && (x > 0))
        cout << "f(x) = -1";


    return 0;



}