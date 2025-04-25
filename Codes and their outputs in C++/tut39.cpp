#include <iostream>
#include <stdio.h>
using namespace std;
const int LEN = 25;
class Employee
{
    char name[LEN];
    unsigned long enumb;

public:
    void getdata()
    {
        cout << "Enter Name :";
        gets(name);
        cout << "Enter Employee Number :";
        cin >> enumb;
    }
    void putdata()
    {
        cout << "Name :" << name << "\t";
        cout << "Emp.Number :" << enumb << "\t";
        cout << "Basic Salary :" << basic;
    }

protected:
    float basic;
    void getbasic()
    {
        cout << "Enter Basic :";
        cin >> basic;
    }
};
class Manager : public Employee
{
    char title[LEN];

public:
    void getdata()
    {
        Employee :: getdata();
        getbasic();
        cout << "Enter Title :";
        gets(title);
        cout << endl;
    }
    void putdata()
    {
        Employee :: putdata();
        cout << "\tTitle :" << title << endl;
    }
};

int main()
{
    Manager m1, m2;
    cout << "Manager1\n";
    m1.getdata();
    cout << "Manager2\n";
    m2.getdata();
    cout << "\t\tManager1 Details\n";
    m1.putdata();
    cout << "\t\tManager2 Details\n";
    m2.putdata();
    return 0;
}