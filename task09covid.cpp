#include<iostream>
using namespace std;
void tpChecker(int people,int tp);

main(){
int people;
cout<<"Number of people in the household: ";
cin>>people;
int tp;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
const int sheets_per_roll=500;
const int sheets_per_person_per_day=57;
double days_remaining=(tp*sheets_per_roll)/(people*sheets_per_person_per_day);
if (days_remaining<14)
{
cout<<"Your TP will only last "<<days_remaining <<" days, buy more!";}
else
{
cout<<"Your TP will last "<<days_remaining <<" days, no need to panic!";}
}

