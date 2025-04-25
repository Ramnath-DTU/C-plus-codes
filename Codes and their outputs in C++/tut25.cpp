#include<iostream>
using namespace std;

class X{
    int codeno;
    float price;
    static int count;
    public:
    void getval(int i, float j)
    {
        codeno = i;
        price = j;
        ++count;
    }
    void display(void){
        cout<<"Code no :"<<codeno<<"\t";
        cout<<"Price :"<<price<<"\n";
    }
    static void dispcount(void)
    { cout<<"count = "<<count<<endl; }
};
int X :: count = 0;
int main()
{
    X ob1, ob2;
    ob1.getval(101, 25.12);
    ob2.getval(102, 38.19);
    X :: dispcount();
    X ob3;
    ob3.getval(103, 49.00);
    X :: dispcount();
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}