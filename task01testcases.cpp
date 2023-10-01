#include<iostream>
using namespace std;
void number1(int num1,int num2);

main(){
int num1;
cout<<"Enter the first number: ";
cin>>num1;
int num2;
cout<<"Enter the second number: ";
cin>>num2;
number1(num1,num2);
}
void number1(int num1,int num2)
{
if(num1==num2)
{cout<<"true";}
else
{cout<<"false";}

}