#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double distance, x1,y1,x2,y2;
    cout<<"Enter coordinate (x,y) of point1: ";
    cin>>x1>>x2;
    cout<<"Enter coordinate (x,y) of point2: ";
    cin>>y1>>y2;
    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"The distance between x1,x2 and y1,y2 is: "<<distance<<endl;
    return 0;
}