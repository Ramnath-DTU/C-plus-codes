#include<iostream>
using namespace std;
int *big(int &x, int &y)
{
    if(x>y)
    return (&x);
    else
    return (&y);
}
int main(){
    int a,b, *c;
    cout<<"Enter two integer \n";
    cin>>a>>b;
    c = big(a, b);
    cout<<"The bigger value is "<<*c<<endl;
    return 0;
}
