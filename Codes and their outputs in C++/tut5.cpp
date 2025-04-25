#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int S, P, a, b, c;
    cout << "Enter sum of the two numbers :";
    cin >> S;
    cout << "Enter the product of the numbers :";
    cin >> P;
    if (S > 0)
        cout << "Quadratic eqn formed is : x*x- " << S << "x + " << P << endl;
    else
        cout << "Quadratic eqn formed is: x * x +" << S << "x + " << P << endl;
    a = 1;
    b = -S;
    c = P;
    cout << "Coefficients are : a= " << a << ",b= " << b << ", c= " << c << endl;
    double discriminant = (b * b) - (4.0 * a * c);
    double sqrrot = sqrt(discriminant);
    double root1 = (-b + sqrrot) / (2.0 * a);
    double root2 = (-b - sqrrot) / (2.0 * a);
    cout << "Two numbers whose sum is " << S << " & product is " << P << " are :" << endl;
    cout << "Root 1 are: " << root1 << ", Root 2 are: " << root2 << endl;
    return 0;
}
