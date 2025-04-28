#include<iostream>
using namespace std;

int main(){
    int i,num,fact=1;
    cout<<"\nEnter the integer: ";
    cin>>num;
    i=num;
    while(num)
    {
        fact *= num;
        --num;
    }
    cout<<"The factorial of "<<i<<" is"<<"\n"<<fact<<endl;
    return 0;
}