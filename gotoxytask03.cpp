#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void movePlayer(int x,int y);

int main()
{
int x=3, y=2;
system("cls");
printMaze();
while(true)
{movePlayer(x,y);
y=y+1;
if(y==10)
{y=2;}
}
}
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(100);
gotoxy(x,y);
cout<<" ";
}
void printMaze()
{
cout<<" ######################################## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ##                                    ## "<<endl;
cout<<" ######################################## "<<endl;}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

