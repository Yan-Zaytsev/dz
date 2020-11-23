#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите числа A, B, C" << endl;
    cin >> a >> b >> c;
    cout << ((a != b && b == c) ? 1 : ((a == c) ? 2 : 3)) << endl;
    return 0;
}