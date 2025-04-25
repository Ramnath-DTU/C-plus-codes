#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string1[50], string2[50];
    cout << "Enter strings \n";
    cin.getline(string1, 50);
    cin.getline(string2, 50);
    if (strlen(string1) == strlen(string2))
        cout << "\nBoth strings contain equal number of characters" << endl;
    else
        cout << "\nBoth strings contain different number of characters" << endl;
    return 0;
}