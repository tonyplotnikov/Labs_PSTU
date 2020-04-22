// Лабораторная работа №7. Плотников Антон. ИВТ-19-1Б.
#include <iostream>
#include <ctime>
using namespace std;

void print_arr(int* arr, const int n)
{
	for (int counter = 0; counter < n; counter++)
	{
		cout << arr[counter] << endl;
	}
	cout << endl;
}

void insert(int* arr, const int n)
{
	int tmp, itmp;
	for (int counter = 1; counter < n; counter++)
	{
		tmp = arr[counter];
		itmp = counter - 1;
		while ((itmp >= 0) and (arr[itmp] > tmp))
		{
			arr[itmp + 1] = arr[itmp];
			arr[itmp] = tmp;
			itmp--;
		}
	}
}

void bubble(int* arr, const int n)
{
	int tmp;
	for (int external = 0; external < n - 1; external++)
	{
		for (int inner = 0; inner < n - external - 1; inner++)
		{
			if (arr[inner] > arr[inner + 1])
			{
				tmp = arr[inner];
				arr[inner] = arr[inner + 1];
				arr[inner + 1] = tmp;
			}
		}
	}
}

void choice(int* arr, const int n)
{
	int min, temp;
	for (int external = 0; external < n - 1; external++)
	{
		min = external;

		for (int inner = external + 1; inner < n; inner++)
		{
			if (arr[inner] < arr[min])
			{
				min = inner;
			}
		}
		temp = arr[external];
		arr[external] = arr[min];
		arr[min] = temp;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n, k = 0;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int counter = 0; counter < n; counter++)
	{
		arr[counter] = rand() % 100 - 50;
	}
	print_arr(arr, n);
	cout << "Выберете метод сортировки:" << endl << "1. Сортировка вставкой " << '\n' << "2. Сортировка пузырьком (методом обмена) " << endl << "3. Сортировка методом выбора" << endl;
	cin >> k;
	switch (k)
	{
	case(1):
		insert(arr, n);
		print_arr(arr, n);
		break;

	case(2):
		bubble(arr, n);
		print_arr(arr, n);
		break;

	case(3):
		choice(arr, n);
		print_arr(arr, n);
		break;
	}
	return 0;
}