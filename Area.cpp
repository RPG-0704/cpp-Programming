#include<iostream>
using namespace std;
int main()
{
int length, width, area, perimeter;
cout<<"Enter length of the rectangle:" ;
cin>>length;
cout<<"Enter width of the rectangle:" ;
cin>>width;
area = length*width;
perimeter = 2*(length+width);
cout<<"Area of rectangle"<<area<<endl;
cout<<"Perimeter of rectangle"<<perimeter<<endl;
}
