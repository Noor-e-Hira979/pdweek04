#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
int main()
{
system("cls");
gotoxy(19,10);
cout<<"####   ####    ####    ######      ####   "<<endl;
gotoxy(19,11);
cout<<" ##     ##      ##      ##  ##    ##  ##  "<<endl;
gotoxy(19,12);
cout<<" ##     ##      ##      ##  ##    ##  ##  "<<endl;
gotoxy(19,13);
cout<<" #########      ##      #####     ######  "<<endl;
gotoxy(19,14);
cout<<" ##     ##      ##      ##   #    ##  ##  "<<endl;
gotoxy(19,15);
cout<<" ##     ##      ##      ##    #   ##  ##  "<<endl;
gotoxy(19,16);
cout<<"####   ####    ####    ###    ##  ##  ##  "<<endl;

}