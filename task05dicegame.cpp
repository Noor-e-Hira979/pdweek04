#include<iostream>
using namespace std;
void position(int a,int b);

main(){
int a ;
cout<<"Enter your position: ";
cin>>a;
int b;
cout<<"Enter your friend's position: ";
cin>>b;
position(a,b);
}
void position(int a,int b)
{
if(b-a<=6)
{cout<<"true";}
else
{cout<<"false";}
}