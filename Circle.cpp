#include<iostream>
using namespace std;
int main()
{
float area, radius, circumference;
const float PI = 3.14;
cout<<"Enter Radius of the circle:" ;
cin>>radius;
area = PI*radius*radius;
circumference = 2*PI*radius;
cout<<"Area of the Circle"<<area<<endl;
cout<<"Circumference of the Circle"<<circumference<<endl;
}
