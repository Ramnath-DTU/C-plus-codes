#include<iostream>
using namespace std;
class subject {
    int days;
    int subjectno;
    public:
    subject(int d = 123, int sn = 101);
    void printsub(void)
    {
        cout<<"Subject NO :"<<subjectno;
        cout<<endl<<"Days :"<<days<<endl;
    }
};
subject :: subject(int d, int sn)
{
    cout<<"Constructing Subject\n";
    days = d;
    subjectno = sn;
}
class student {
    int rollno;
    float marks ;
    public:
    student()
    {
        cout<<"Constructing student\n";
        rollno = 0;
        marks = 0.0;
    }
    void getval(void)
    {
        cout<<"Enter roll numbers and marks :";
        cin>>rollno>>marks;
        cout<<endl;
    }
    void print(void)
    {
        cout<<"Roll no :"<<rollno;
        cout<<endl<<"Marks :"<<marks<<endl;
    }
};
class Admission {
    subject sub;
    student stud;
    float fees;
    public:
    Admission()
    {
        cout<<"Constructing Admission\n";
        fees = 0.0;
    }
    void print(void)
    {
        stud.print();
        sub.printsub();
        cout<<"Fees :"<<fees<<endl;
    }
};
int main() {
    Admission adm;
    cout<<"\nBack in main()\n";
    return 0;
}