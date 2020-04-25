// Плотников Антон, 18 (9э) поиск данных с помощью хэш-таблиц
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <time.h>

using namespace std;
const int HASHTAB_SIZE{ 40 };
int colisions;

struct Node {
    string fio;
    int passport;
    int phone;
    struct Node* next;
};

struct Node* FIOtab[100];

string getFio()
{
    vector<string> surnames = {
    "Иванов","Петров","Сидоров","Тесла","Маск","Эйнштейн","Ньютон","Гук","Кюри","Сталин","Ленин","Маркс"
    };
    vector<string> names = {
    "Иван","Петр","Сидор","Никола","Илон","Альберт","Исаак","Роберт","Мария","Иосиф","Владимир","Карл",
    "Алексей","Михаил","Дмитрий"
    };
    vector<string> patronymics = {
    "Иванович","Петрович","Сидорович","Николаевич","Илонович","Альбертович","Исаакович","Робертович","Маркович",
    "Иосифович","Владимирович","Карлович","Алексеевич","Михаилович","Дмитриевич"
    };

    string result;
    result = surnames.at(rand() % 12) + " ";
    result += names.at(rand() % 15) + " ";
    result += patronymics.at(rand() % 15) + " ";

    return result;
}

int getPassport()
{
    int result = rand() % 1000000 + 9999999;
    return result;
}

int getPhone()
{
    int result = rand() % 8900000 + 8999999;
    return result;
}

unsigned int hashtab_hash(string key)
{
    char c;
    unsigned int myhash = 0;

    for (int i = 0; i < key.length(); i++)
    {
        c = key[i];
        myhash += (int)c * (2 * i);
    }

    return myhash % HASHTAB_SIZE;
}
Node* make(Node*& temp, string fio, int  passport, int  phone)
{

    Node* temp0 = temp;

    while (temp0->next != NULL)
    {
        temp0 = temp0->next;
    }
    Node* temp1 = new Node;
    temp1->fio = fio;
    temp1->passport = passport;
    temp1->phone = phone;
    temp1->next = NULL;
    temp0->next = temp1;
    temp1 = temp0;
    return temp1;
}

void hashtab_init()
{
    for (int i = 0; i < 100; i++)
    {
        FIOtab[i] = NULL;
    }
    colisions = 0;
}

void hashtab_add()
{

    for (int i = 0; i < 100; i++) {
        string fio = getFio();
        int passport = getPassport();
        int phone = getPhone();

        Node* temp = new Node;
        unsigned index = hashtab_hash(fio);

        if (FIOtab[index] == NULL)
        {
            temp->fio = fio;
            temp->passport = passport;
            temp->phone = phone;
            temp->next = NULL;
            FIOtab[index] = temp;
        }
        else
        {
            temp = FIOtab[index];
            Node* temp2 = make(temp, fio, passport, phone);
            FIOtab[index] = temp2;
            colisions += 1;
        }
    }
}
void searhHASH(string searh)
{
    for (int i = 0; i < HASHTAB_SIZE; i++) {

        if (FIOtab[i] != NULL)
        {

            if (FIOtab[i]->next == NULL && FIOtab[i]->fio == searh) {

                cout << "\n\t Найдено по индексу: " << i;
                cout << "\nФИО: " << FIOtab[i]->fio;
                cout << "\nПаспорт: " << FIOtab[i]->passport;
                cout << "\nТелефон: " << FIOtab[i]->phone;
            }
            else
            {
                Node* p = FIOtab[i];
                while (p != 0)
                {
                    if (p->fio == searh) {
                        cout << "\n\t Найдено по индексу: " << i;
                        cout << "\nФИО: " << p->fio;
                        cout << "\nПаспорт: " << p->passport;
                        cout << "\nТелефон: " << p->phone;
                    }
                    p = p->next;
                }
            }
        }
    }

}
int main()
{
    setlocale(0, "rus");
    srand(time(NULL));
    hashtab_init();
    hashtab_add();
    string searh = getFio();
    cout << "\nРазмер таблицы: " << HASHTAB_SIZE;
    cout << "\nПоиск ФИО: ";
    cout << searh;
    searhHASH(searh);
    cout << endl;
    cout << "\nКоллизий: " << colisions;
    return 0;
}