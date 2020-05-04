//Плотников Антон, Лабораторная работа №13. Рекурсия.

#include <iostream>
using namespace std;

int main()
{
    int a, b, с = 1;
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;

        }
        else
        {
            b -= a;
        }
        ++с;
    }
    cout << с;
}