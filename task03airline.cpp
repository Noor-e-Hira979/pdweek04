#include<iostream>
using namespace std;
void discount(string country,float ticketPrice);

main(){
string country;
cout<<"Enter the country's name: ";
cin>>country;
float ticketPrice;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketPrice;
discount(country,ticketPrice);
}

void discount(string country,float ticketPrice)
{float afterdisc;
if(country=="Pakistan")
{ 
afterdisc=ticketPrice*(0.95);
}

else if(country=="Ireland")
{afterdisc=ticketPrice*0.9;}

else if(country=="India")
{afterdisc=ticketPrice*0.8;}


else if(country=="England")
{afterdisc=ticketPrice*0.7;}


else if(country=="Canada")
{afterdisc=ticketPrice*0.55;
}
cout<<"Final ticket price after discount: $"<<afterdisc;}





