#include<iostream>
using namespace std;
class Item {
    public:
    int itemno;
    float price;
    void getdata (int i, float j)
    {
        itemno = i;
        price = j;
    }
    void putdata(void)
    {
        cout<<"Items :"<<itemno;
        cout<<"\n"<<"Price "<<price<<endl;
    }
};
Item s1, s2;

int main(){
    s1.getdata(1001, 17.50);
    s1.putdata();
    return 0;
}
