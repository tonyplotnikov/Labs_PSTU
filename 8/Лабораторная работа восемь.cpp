﻿// Лабораторная работа №8. Антон Плотников. ИВТ-19-1Б.

#include <iostream>
#include <ctime>
using namespace std;
void max(int** matr, int n, int m)
{
    int max, k, temp;
    cout << "Введите номер строки: ";
    cin >> k;
    max = matr[k - 1][0];
    for (int i = k - 1; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matr[i][j] > max)
            {
                max = matr[i][j];
            }
        }
    }
    cout << "max = " << max << endl;
    for (int d = 0; d < max; d++)
    {
        for (int i = 0; i < n; i++)
        {
            temp = matr[i][m - 1];
            for (int j = m - 1; j > -1; j--)
            {
                matr[i][j + 1] = matr[i][j];
            }
            matr[i][0] = temp;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, m;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;
    int** matr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matr[i][j] = rand() % 10 - 5;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matr[i][j] << "  ";
        }
        cout << endl;
    }
    max(matr, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matr[i][j] << "  ";
        }
        cout << endl;
    }
}