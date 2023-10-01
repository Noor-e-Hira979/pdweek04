#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulips);
main(){
int redRose;
cout<<"Red Rose: ";
cin>>redRose;
int whiteRose;
cout<<"White Rose: ";
cin>>whiteRose;
int tulips;
cout<<"Tulips: ";
cin>>tulips;

flowerShop(redRose,whiteRose,tulips);
}
void flowerShop(int redRose,int whiteRose,int tulips)
{float totalPrice;
totalPrice=redRose*2+whiteRose*4.10+tulips*2.50;
cout<<"Orignal Price: $"<<totalPrice <<endl;

if(totalPrice>200)
{float discount;
discount=totalPrice*(20/100);
float final;
final=totalPrice-discount;
cout<<"Price after Discount: $"<<final;}
else
{cout<<"No discount applied.";}
}

