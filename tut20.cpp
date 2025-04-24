#include <iostream>
using namespace std;
class ITEM
{
  int itemcode[50];
  float it_price[50];

public:
  void initialize(void);
  float largest(void);
  float sum(void);
  void display_items(void);
};
void ITEM ::initialize(void)
{
  for (int i = 0; i < 50; i++)
  {
    cout << "\n"
         << "Item No :" << (i + 1) << endl;
    cout << "Enter the code :" << endl;
    cin >> itemcode[i];
    cout << "Enter item price :" << endl;
    cin >> it_price[i];
    cout << endl;
  }
}
float ITEM ::largest(void)
{
  float large = it_price[0];
  for (int i = 1; i < 50; i++)
  {
    if (large < it_price[i])
      large = it_price[i];
  }
  return large;
}
float ITEM ::sum(void)
{
  float sum = 0;
  for (int i = 0; i < 50; i++)
  {
    sum += it_price[i];
  }
  return sum;
}
void ITEM ::display_items(void)
{
  cout << "\nCode Price\n";
  for (int i = 0; i < 50; i++)
  {
    cout << "\n"
         << itemcode[i];
    cout << "\t" << it_price[i];
  }
  cout << endl;
}

int main()
{
  ITEM order;
  order.initialize();
  float total, biggest;
  int ch = 0;
  do
  {
    cout << "\nMain Menu." << endl;
    cout << "\n1.Display largest price." << endl;
    cout << "\n2.Display sum of prices." << endl;
    cout << "\n3.Display item list." << endl;
    cout << "\nEnter your choice(1-3):" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
      biggest = order.largest();
      cout << "The largest Price is " << biggest << endl;
      break;
    case 2:
      total = order.sum();
      cout << "The sum of Prices is " << total << endl;
      break;
    case 3:
      order.display_items();
      break;
    default:
      cout << "\nWrong choice!!\n";
      break;
    }
  } while (ch >= 1 && ch <= 3);

  return 0;
}