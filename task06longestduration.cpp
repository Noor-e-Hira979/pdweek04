#include<iostream>
using namespace std;
void longestTime(int h,int m);

main(){
int h;
cout<<"Enter the number of hours: ";
cin>>h;


int m;
cout<<"Enter the number of minutes: ";
cin>>m;
longestTime(h,m);
}
void longestTime(int h,int m)
{
if(h*60>m)
{cout<<h;}
else
{cout<<m;}
}