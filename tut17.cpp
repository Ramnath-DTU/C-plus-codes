#include<iostream>
#include<math.h>
using namespace std;

float area(float a, float b, float c)
{ float s, ar;
s = (a+b+c)/2;
ar = sqrt(s*(s-a)*(s-b)*(s-c));
return ar;
}
float area(float a, float b)
{
    return a*b;
}
float area(float a)
{
    return a*a;
}
int main(){
    int choice, s1, s2, s3, ar;
    do{
        cout<<"\nArea Main Menu "<<endl;
        cout<<"\n1. Triangle "<<endl;
        cout<<"\n2. Square "<<endl;
        cout<<"\n3. Rectangle "<<endl;
        cout<<"\n4. Exit "<<endl;
        cout<<"\nEnter your choice (1-4) :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1 : cout<<"Enter 3 sides"<<endl;
                     cin>>s1>>s2>>s3;
                     ar=area(s1,s2,s3);
                     cout<<"The area is "<<ar<<endl;
                     break;
            case 2 : cout<<"Enter a sides"<<endl;
                     cin>>s1;
                     ar=area(s1);
                     cout<<"The area is "<<ar<<endl;
                     break;
            case 3 : cout<<"Enter Length & breadth"<<endl;
                     cin>>s1>>s2;
                     ar=area(s1,s2);
                     cout<<"The area is "<<ar<<endl;
                     break;
            case 4 : break;
            default : cout<<"Wrong Choice!!"<<endl;
        };
    } while(choice>0 && choice<4);
    return 0;
}