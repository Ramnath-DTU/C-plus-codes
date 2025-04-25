#include <iostream>
using namespace std;

int main()
{
    int X[] = {10, 25, 30, 55, 110};
    int *p = X;
    while (*p < 110)
    {
        if (*p % 3 != 0)
        {
            *p = *p + 1;
        }
        else
        {
            *p = *p + 2;
        }
        p++;
    }
    for (int i = 4; i >= 1; i--)
    {
        cout << X[i] << "*";
        if (i % 3 == 0)
            cout << endl;
    }
    return 0;
}