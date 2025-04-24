#include<iostream>
using namespace std;
class BASE {
    int a;
    public :
    int b;
    void getdata()
    {
        cin>>a;
    }
    void putdata()
    {
        cout<<a;
    }
};
class Derived : public BASE
{
    int p;
    public :
    int q;
};

int main(){
   cout<<"Size of base class: "<<sizeof(BASE)<<endl; 
   cout<<"Size of Derived class: "<<sizeof(Derived)<<endl; 
   BASE obj1;
   Derived obj2;
   cout<<endl<<"Size of Base Class Object :"<<sizeof(obj1)<<endl;
   cout<<"Size of Derived Class Object :"<<sizeof(obj2)<<endl;
    return 0;
}