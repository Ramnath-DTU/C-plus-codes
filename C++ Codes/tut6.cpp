#include <iostream>
using namespace std;

int main()
{
   char ch;
   float a, b, result;
   cout << "Enter two numbers :";
   cin >> a >> b;
   cout << "\n"
        << "Enter the operator(+,-,*,/) :";
   cin >> ch;
   cout << "\n";
   if (ch == '+')
      result = a + b; 
   else if (ch == '-')
      result = a - b;
   else if (ch == '*')
      result = a * b;
   else if (ch == '/')
      result = a / b; /*b must not equal to zero*/
   else
   {
      cout << "\n"
           << "Wrong operator!" << endl;
      goto lb;
   }
   cout << "\n"
        << "The calculated result is :" << endl
        << result << endl;
lb:
   return 0;
}