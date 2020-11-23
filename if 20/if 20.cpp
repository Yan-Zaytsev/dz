#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите числа A, B, C" << endl;
    cin >> a >> b >> c;
    if ((b < c) && (b > 0))
        cout << "Точка B ближе" << endl << "Расстояние между B и A = " << b - a;
    else if ((b < c) && (b < 0))
        cout << "Точка C ближе" << endl << "Расстояние между C и A = " << (c - a) * (-1);

    if ((c < b) && (c > 0))
        cout << "Точка C ближе" << endl << "Расстояние между C и A = " << c - a;
    else if ((c < b) && (c < 0))
        cout << "Точка B ближе" << endl << "Расстояние между B и A = " << (b - a) * (-1);

    return 0;
}
