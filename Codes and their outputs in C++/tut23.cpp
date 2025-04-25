#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void PrintNumber(void)
    {
        cout << "Your Complex number is " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.PrintNumber();

    c2.setNumber(3, 4);
    c2.PrintNumber();

    sum = sumcomplex(c1, c2);
    sum.PrintNumber();

    return 0;
}