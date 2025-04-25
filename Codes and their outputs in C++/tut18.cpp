#include <iostream>
using namespace std;

int divide(int a, int b) // Giving divisibility at zero dennomiator which means error
{
  if (b == 0)
  {
    return -1;
  }
  else if ((a % b) == 0)
  {
    return 1;
  }
  else
    return 0;
}
int divide(int a)
{
  int j = a / 2, flag = 1;
  for (int i = 2; (i <= j) && (flag); i++)
  {
    if (a % i == 0)
      flag = 0;
  }
  return flag;
}
int main()
{
  int ch, res, a, b;
  do
  {
    cout << "1. Check for divisibility " << endl;
    cout << "2. Check for Prime " << endl;
    cout << "3. Exit " << endl;
    cout << "Enter the choice(1-3) :";
    cin >> ch;
    cout << endl;
    switch (ch)
    {
    case 1:
      cout << "Enter the Numerator and Dennominator :" << endl;
      cin >> a >> b;
      res = divide(a, b);
      cout << ((res) ? "It is" : "It is not") << endl;
      break;
    case 2:
      cout << "Enter the Number :" << endl;
      cin >> a;
      res = 0;
      res = divide(a);
      cout << ((res) ? "It is" : "It is not") << endl;
      break;
    case 3:
      break;
    default:
      cout << "Wrong choice !" << endl;
      break;
    };
  } while (ch > 0 && ch < 3);
  return 0;
}