#include <iostream>
using namespace std;
void pet(int holidays);
 main(){
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}

void pet(int holidays)
{
int workingdays,time_for_games,norm ,difference,hours,minutes;
workingdays=365-holidays;
time_for_games=workingdays*63+holidays*127;
norm=30000;

if (time_for_games<norm){

difference=norm-time_for_games;
cout<<"Tom will run away"<<endl;
hours=difference/60;
minutes=difference%60;
cout<<hours <<" hours and "<<minutes <<" minutes less for play";
}
if(norm<time_for_games){
;
difference=time_for_games-norm;
cout<<"Tom will run away" <<endl;
hours=difference/60;
minutes=difference%60;
cout<<hours <<" hours and "<<minutes <<" minutes for play";
}
}