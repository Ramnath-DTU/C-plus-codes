#include <iostream>
using namespace std;

int main()
{
    void change(int &);
    int orig = 10;
    cout << "The original value is :" << orig << endl;
    change(orig);
    cout << "Value after change() is over :" << orig << endl;
    return 0;
}
void change(int &a)
{
    a = 20;
    cout << "Value of orig in is :" << a << endl;
}