#include<iostream>
using namespace std;
void reverse1(string rev);

main(){
string rev;
cout<<"Enter 'true' or 'false': ";
cin>>rev;
reverse1(rev);
}
void reverse1(string rev)
{
if(rev=="true")
{ cout<<"false";}
else
{ cout<<"true";}
}


