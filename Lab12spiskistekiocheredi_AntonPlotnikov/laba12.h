#pragma once
#ifndef HEADER1_H
#define HEADER1_H
using namespace std;
bool est = false;
struct odin
{
	int data;
	odin* next;
};
odin* make_odin(odin*& beg, int n)
{
	odin* p; odin* r;
	p = new odin;
    cout << "Введите элемент:" << endl;
	cin >> p->data;
	p->next = 0;
	beg = p;
	for (int i = 1; i < n; i++)
	{
		r = new odin;
        cout << "Введите элемент:" << endl;
		cin >> r->data;
		r->next = 0;
		p->next = r;
		p = r;
	}
    est = true;
	return beg;
}
void print_odin(odin* beg)
{
    if (est == true)
    {
        while (beg)
        {
            cout << beg->data << "\t";
            beg = beg->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}
odin* del_odin(odin*& beg, int n)
{
    odin* tmp = 0;
    odin* ptr = 0;
    odin* p = beg;
    for (int i = 1; i < n - 1 && p->next != 0; i++)
    {
        p = p->next;
        if (p->next->data % 2 == 0 && p->next != 0)
        {
            ptr = p;
            tmp = p->next;
        }
    }
    if (tmp == 0 && beg->data % 2 != 0)
    {
        return beg;
    }
    else if (tmp != 0)
    {
        ptr->next = tmp->next;
        delete tmp;
        return beg;
    }
    else
    {
        p = beg;
        beg = beg->next;
        delete p;
    }
}
odin* clear_odin(odin* beg)
{
    while (beg)
    {
        odin* p = beg;
        beg = beg->next;
        delete p;
    }
    beg = 0;
    est = false;
    return beg;
}
struct dva
{
    char* data;
    dva* next;
    dva* prev;
};
dva* make_dva(dva*& first, int n)
{
    dva* p; dva* r;
    p = new dva;
    char s[50];
    cout << "Введите элемент: " << endl;
    cin >> s;
    p->data = new char[strlen(s) + 1];
    strcpy(p->data, s);
    p->next = 0;
    p->prev = 0;
    first = p;
    for (int i = 1; i < n; i++)
    {
        r = new dva;
        r->prev = p;
        r->next = 0;
        char s[50];
        cout << "Введите элемент: " << endl;
        cin >> s;
        r->data = new char[strlen(s) + 1];
        strcpy(r->data, s);
        p->next = r;
        p = r;
    }
    est = true;
    return first;
}
void print_dva(dva* first)
{
    if (est == true)
    {
        while (first)
        {
            cout << first->data << '\t';
            first = first->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}
dva* add_dva(dva*& first, int k)
{
    dva* p = first;
    dva* r = new dva;
    r->prev = 0;
    r->next = 0;
    char s[50];
    cout << "Введите элемент:" << endl;
    cin >> s;
    r->data = new char[strlen(s) + 1];
    strcpy(r->data, s);
    if (k == 1)
    {
        r->next = first;
        first->prev = r;
        first = r;
        r->prev = 0;
        return first;
    }
    for (int i = 1; i < k - 1 && p->next != 0; i++)
    {
        p = p->next;
    }
    if (p != 0)
    {
        r->next = p->next;
        p->next = r;
        r->prev = p;
        return first;
    }
}
dva* clear_dva(dva* first)
{
    while (first)
    {
        dva* p = first;
        first = first->next;
        delete p;
    }
    first = 0;
    est = false;
    return first;
}
struct Stack
{
	Stack* next;
	char* data;
};
Stack* make_stack(Stack*& top, char* data, int n)
{
    Stack* r;
    for (int i = 1; i < n; i++)
    {
        r = new Stack;
        r->data = data;
        r->next = top;
        top = r;
    }
    est = true;
    return top;
}
void print_stack(Stack* top)
{
    if (est == true)
    {
        Stack* p = top;
        while (p != 0)
        {
            cout << p->data << '\t';
            p = p->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}
Stack* add_stack(Stack*& top, int k)
{
    Stack* p = top;
    Stack* r = new Stack;
    cout << "Введите элемент стека:";
    char s[50];
    cin >> s;
    char* data = new char[strlen(s) + 1];
    strcpy(data, s);
    r->data = data;
    if (k == 1)
    {
        r->next = top;
        top = r;
        return top;
    }
    for (int i = 1; i < k - 1 && p->next != 0; i++)
    {
        p = p->next;
    }
    if (p != 0)
    {
        r->next = p->next;
        p->next = r;
    }
    return top;
}
Stack* clear_stack(Stack*& top)
{
    while (top)
    {
        Stack* p = top;
        top = top->next;
        delete p;
        p = top;
    }
    top = 0;
    est = false;
    return top;
}
struct Queue
{
    Queue* next;
    char* data;
};
Queue* make_queue(Queue*& First,Queue*& last, char* Data, int n)
{
    First = new Queue;
    First->data = Data;
    First->next = 0;
    last = First;
    for (int i = 1; i < n; i++)
    {
        Queue* p = new Queue;
        p->data = Data;
        p->next = last;
        last = p;       
    }
    return last;
}
void print_queue(Queue* last)
{
    Queue* p = last;
    while (p)
    {
        cout << p->data << '\t';
        p = p->next;
    }
    cout << endl;
}
Queue* add_queue(Queue*& First, Queue*& last, int k, int& n)
{
    Queue* p = last;
    Queue* r = new Queue;
    cout << "Введите элемент очереди:";
    char q[50];
    cin >> q;
    char* Data = new char[strlen(q) + 1];
    strcpy(Data, q);
    r->data = Data;
    n++;
    if (k == 1)
    {
        r->next = 0;
        First->next = r;
        return First;
    }
    else if (k == n)
    {
        r->next = last;
        last = r;
        return last;
    }
    for (int i = 1; i < n - k - 1 && p->next != 0; i++)
    {
        p = p->next;
    }
    if (p != 0)
    {
        r->next = p->next;
        p->next = r;
        return last;
    }
}
Queue* clear_queue(Queue*& First, Queue*& last)
{  
    while (last)
    {
        Queue* p = last;
        last = last->next;
        delete p;
        p = last;
    }
    last = 0;
    First = 0;
    return last;   
}
int variant(int g)
{
	int n, k, p;
	if (g == 1)
	{
        odin* beg = 0;
		do
		{
			cout << "1.Формирование списка\n";
			cout << "2.Печать списка\n";
			cout << "3.Удалить из списка последний элемент с четным информационным полем\n";
			cout << "4.Удаление списка из памяти\n";
			cout << "5.Выход\n";
			cin >> p;
			switch (p)
			{
			case 1:
			{
				cout << "Введите количество элементов списка: ";
				cin >> n;
				make_odin(beg, n);
				break;
			}

			case 2:
			{
				print_odin(beg);
				break;
			}

			case 3:
			{
				del_odin(beg, n);
				break;
			}
			case 4:
			{
				clear_odin(beg);
				break;
			}
			}
		} while (p != 5);
	}
	else if (g == 2)
	{
        dva* first = 0;
		do
		{
			cout << "1.Формирование списка\n";
			cout << "2.Печать списка\n";
			cout << "3.Добавление в список элемента с заданным номером\n";
			cout << "4.Удаление списка из памяти\n";
			cout << "5.Выход\n";
			cin >> p;
			switch (p)
			{
			case 1:
			{
				cout << "Введите количество элементов списка:";
				cin >> n;
				make_dva(first, n);
				break;
			}

			case 2:
			{
				print_dva(first);
				break;
			}

			case 3:
			{
				cout << endl << "Введите номер элемента:";
				cin >> k;
				add_dva(first, k);
				break;
			}
			case 4:
			{
				clear_dva(first);
				break;
			}
			}
		} while (p != 5);
	}
    else if (g == 3)
    {
        Stack* top = new Stack;
        char s[50];
        cout << "Введите элемент стека:";
        cin >> s;
        char* data = new char[strlen(s) + 1];
        strcpy(data, s);
        top->data = data;
        top->next = 0;
        do
        {
            cout << "1.Формирование стека\n";
            cout << "2.Печать стека\n";
            cout << "3.Добавление в стек элемента с заданным номером\n";
            cout << "4.Удаление стека из памяти\n";
            cout << "5.Выход\n";
            cin >> p;
            switch (p)
            {
            case 1:
            {
                cout << "Введите количество элементов стека:";
                cin >> n;
                make_stack(top, data, n);
                break;
            }

            case 2:
            {
                print_stack(top);
                break;
            }

            case 3:
            {
                cout << "Введите номер элемента:";
                cin >> k;
                add_stack(top, k);
                break;
            }
            case 4:
            {
                clear_stack(top);
                delete[]data;
                break;
            }
            }
        } while (p != 5);
    }
    else if (g == 4)
    {
    Queue* First = 0;
    Queue* last = 0;
    char q[50];
    cout << "Введите элемент очереди:";
    cin >> q;
    char* Data = new char[strlen(q) + 1];
    strcpy(Data, q);
    do
    {
        cout << "1.Формирование очереди\n";
        cout << "2.Печать очереди\n";
        cout << "3.Добавление в очередь элемента с заданным номером\n";
        cout << "4.Удаление очереди из памяти\n";
        cout << "5.Выход\n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "Введеите количество элементов очереди:";
            cin >> n;
            make_queue(First, last, Data, n);
            break;
        }

        case 2:
        {
            print_queue(last);
            break;
        }

        case 3:
        {
            cout << "Введите номер элемента:";
            cin >> k;
            add_queue(First, last, k, n);
            break;
        }
        case 4:
        {
            clear_queue(First, last);
            delete[]Data;
            break;
        }
        }
    } while (p != 5);
    }
	else
		cout << "нет такого номера задания";
	return 0;
}
#endif