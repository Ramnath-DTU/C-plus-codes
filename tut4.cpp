#include <iostream>
using namespace std;

int main()
{
    int choice;
    float temp, countemp;
    cout << "Temperature conversion Menu"
         << "\n";
    cout << "1. Fahrenheit to celsius"
         << "\n";
    cout << "2. Celsius to fahrenheit"
         << "\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter the value of temp in Fahrenheit: " << endl;
        cin >> temp;
        countemp = (temp - 32) / 1.8;
        cout << "Value in Celsius is: " << countemp << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter the value of temp in Cetigrade: " << endl;
        cin >> temp;
        countemp = (1.8 * temp) + 32;
        cout << "Value in Fahrenheit is: " << countemp << endl;
    }
    else
        cout << "\nWrong Choice";
    return 0;
}