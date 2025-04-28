#include <iostream>
using namespace std;
void amount(float princ, int time = 2, float rate = 0.8)
{
    cout << "\nPrincipal Amount :" << princ << endl;
    cout << "\nTime :" << time << " Years" << endl;
    cout << "\nRate :" << rate << endl;
    cout << "\nInterest Amount :" << (princ * time * rate) << endl;
}
int main()
{
    cout << "Case 1 :";
    amount(2000);
    cout << "\nCase 2 :";
    amount(2500, 3);
    cout << "\nCase 3 :";
    amount(2500, 3, 0.11);
    cout << "\nCase 4 :";
    amount(2000, 0.1);
    return 0;
}