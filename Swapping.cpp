#include<iostream>
using namespace std;
int main()
{
int a, b, V;
cout<<"Enter First Variable:" ;
cin>>a;
cout<<"Enter Second Variable:" ;
cin>>b;
a = b;
b = V;
V = a;
cout<<"\n After swapping:"<<endl;
cout<<"First number:"<<a<<endl;
cout<<"Second number:"<<b<<endl;
}
