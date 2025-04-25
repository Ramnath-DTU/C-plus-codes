#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"\nEnter the value"<<endl;
    cin>>a;
    cout<<"\nThe value of factorial "<<a<<" is :"<<factorial(a);
    return 0;
}