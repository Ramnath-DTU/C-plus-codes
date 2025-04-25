#include<iostream>
using namespace std;
int a=10;

int main(){
    int a = 15;
    cout<<"Main()"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"::a = "<<::a<<endl;
    {
        int a =25;
        cout<<"Inner block\n";
        cout<<"a = "<<a<<endl;
        cout<<"::a = "<<::a<<endl;
    }
    cout<<"Back to main()"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"::a = "<<::a<<endl;
    return 0;
}