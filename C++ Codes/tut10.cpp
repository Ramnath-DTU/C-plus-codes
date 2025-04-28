#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char astr[51];
    int length;
    cout << "\nEnter a string(max 50 char) " << endl;
    gets(astr);
    length = strlen(astr);
    puts(astr);
    cout << "\nThe length of the string is :" << length << endl;
    return 0;
}