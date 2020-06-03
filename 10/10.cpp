// Лабораторная работа №10. Плотников Антон. ИВТ-19-1Б.
#include <iostream>
using namespace std;
int recurs(int n, int m, int k)
{
    if (n != m)
    {
        if (n > m)
        {
            n = n - m;
            k++;
        }
        if (m > n)
        {
            m = m - n;
            k++;
        }
        recurs(n, m, k);
    }
    if (n == m)
    {
        cout << "k = " << k << endl;
    }
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m, k = 0;
    cout << "Введите длину стороны А: ";
    cin >> n;
    cout << "Введите длину стороны В: ";
    cin >> m;
    recurs(n, m, k);
}