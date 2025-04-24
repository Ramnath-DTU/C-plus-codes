#include <iostream>
using namespace std;
int main()
{
    int d_o_w;
    cout << "Enter number of week's day(1-7) :";
    cin >> d_o_w;
    switch (d_o_w)
    {
    case 1:
        cout << "\nSunday";
        break;
    case 2:
        cout << "\nMonday";
        break;
    case 3:
        cout << "\nTuesday";
        break;
    case 4:
        cout << "\nWednesday";
        break;
    case 5:
        cout << "\nThursday";
        break;
    case 6:
        cout << "\nFriday";
        break;
    case 7:
        cout << "\nSaturday";
        break;
    default:
        cout << "\nWrong number of day!";
        break;
    }
    return 0;
}
