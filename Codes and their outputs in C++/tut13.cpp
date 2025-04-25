#include <iostream>
using namespace std;

int main()
{
    float marks[50];
    for (int i = 0; i < 50; ++i)
    {
        cout << "Enter the marks of student " << i + 1 << ":";
        cin >> marks[i];
    }
    cout << endl;
    for (int i = 0; i < 50; ++i)
        cout << "Marks = " << marks[i] << endl;
    return 0;
}