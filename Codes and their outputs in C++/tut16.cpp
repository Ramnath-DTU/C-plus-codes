#include<iostream>
using namespace std;
void amount(float princ, int time, float rate)
{
    cout<<"\nPrincipal Amount :"<<princ;
    cout<<"\tTime :"<<time<<" Years";
    cout<<"\tRate :"<<rate;
    cout<<"\nInterest Amount :"<<(princ*time*rate)<<endl;
}
void amount(float princ, int time)
{
    cout<<"\nPrincipal Amount :"<<princ;
    cout<<"\tTime :"<<time<<" Years";
    cout<<"\tRate :0.08";
    cout<<"\nInterest Amount :"<<(princ*time*0.08)<<endl;
}
void amount(float princ, float rate)
{
    cout<<"\nPrincipal Amount :"<<princ;
    cout<<"\tTime :2 years";
    cout<<"\tRate :"<<rate;
    cout<<"\nInterest Amount :"<<(princ*2*rate)<<endl;
}
void amount(int time, float rate)
{
    cout<<"\nPrincipal Amount : 2000";
    cout<<"\tTime :"<<time;
    cout<<"\tRate :"<<rate;
    cout<<"\nInterest Amount :"<<(2000*time*rate)<<endl;
}
void amount(float princ)
{
    cout<<"\nPrincipal Amount :"<<princ;
    cout<<"\tTime : 2 years";
    cout<<"\tRate :0.08";
    cout<<"\nInterest Amount :"<<(princ*2*0.08)<<endl;
}
int main(){
    cout<<"Case 1 :";
    amount(2000.0F);
    cout<<"\nCase 2 :";
    amount(2500.0F,3);
    cout<<"\nCase 3 :";
    amount(2300.0F,3,0.11F);
    cout<<"\nCase 4 :";
    amount(2,0.12F);
    cout<<"\nCase 5 :";
    amount(6,0.07F);
    return 0;
}