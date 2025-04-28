#include <iostream>
using namespace std;
int *rollno;
float *marks;

int main()
{
    int size;
    cout << "How many elements are there in the array ?\n";
    cin >> size;
    rollno = new int[size];
    marks = new float[size];
    if ((!rollno) || (!marks))
    {
        cout << "Out of Memory! Aborting !";
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter roll no and marks for student " << (i + 1) << endl;
        cin >> rollno[i] >> marks[i];
    }
    cout << "\tRoll no \tMarks\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << rollno[i] << "\t\t" << marks[i] << endl;
    }
    delete[] rollno;
    delete[] marks;
    return 0;
}