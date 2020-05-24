#include "Emloyee.h"
Employee::Employee(void) :Person()
{
    salary = 0;
    post = "";
}
Employee::~Employee(void)
{
}
Employee::Employee(string N, int A, float S, string P) :Person(N, A)
{
    salary = S;
    post = P;
}
Employee::Employee(const Employee& E)
{
    name = E.name;
    age = E.age;
    salary = E.salary;
    post = E.post;
}
void Employee::Set_salary(float S)
{
    salary = S;
}
void Employee::Set_post(string P)
{
    post = P;
}
Employee& Employee::operator=(const Employee& e)
{
    if (&e == this)return *this;
    name = e.name;
    age = e.age;
    return *this;
}
void Employee::Show()
{
    cout << "\nname: " << name;
    cout << "\nage: " << age;
    cout << "\nsalary: " << salary;
    cout << "\npost: " << post;
    cout << "\n";
}
void Employee::Show_object()
{
    cout << "\nname: " << name;
    cout << "\nage: " << age;
    cout << "\nsalary: " << salary;
    cout << "\npost: " << post;
    cout << "\n";
}
void Employee::Input()
{
    cout << "\nname:"; cin >> name;
    cout << "\nage:"; cin >> age;
    cout << "\nsalary: "; cin >> salary;
    cout << "\npost: "; cin >> post;
}