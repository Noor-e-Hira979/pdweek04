#include <iostream>
using namespace std;

void header();
void menu();
void pressAnyKey();
float std1aggregate(float matric, float inter, float ecat);
float std2aggregate(float matric2, float inter2, float ecat2);

int main()
{
    string name, name2;
    float matric, matric2, inter, inter2, ecat, ecat2;
    float agg1, agg2;
    while (true)
    {
        header();
        menu();

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            header();
            cout << "Enter name of student 1: ";
            cin >> name;
            cout << "Ecat Marks: ";
            cin >> ecat;
            cout << "Matric Marks: ";
            cin >> matric;
            cout << "Inter Marks: ";
            cin >> inter;
            pressAnyKey();
        }

        if (choice == 2)
        {
            header();
            cout << "Enter name of student 2: ";
            cin >> name2;
            cout << "Ecat Marks: ";
            cin >> ecat2;
            cout << "Matric Marks: ";
            cin >> matric2;
            cout << "Inter Marks: ";
            cin >> inter2;
            pressAnyKey();
        }

        if (choice == 3)
        {
            header();
            agg1 = std1aggregate(matric, inter, ecat);
            cout << name << "'s aggregate: " << agg1 << endl;
            pressAnyKey();
        }

        if (choice == 4)
        {
            header();
            agg2 = std2aggregate(matric2, inter2, ecat2);
            cout << name2 << "'s aggregate: " << agg2 << endl;
            pressAnyKey();
        }

        if (choice == 5)
        {
            header();
            if (agg1 >= agg2)
            {
                cout << "First roll number is: " << name << endl;
            }
            if (agg1 < agg2)
            {
                cout << "First roll number is: " << name2 << endl;
            }
            pressAnyKey();
        }
        if (choice == 0)
        {
            break;
        }
    }
}
void header()
{
    system("cls");
    cout << "###########################################" << endl;
    cout << "  UNIVERSITY ADMISSION MANAGEMENT SYSTEM   " << endl;
    cout << "###########################################" << endl;
    cout << "                                           " << endl;
}
void menu()
{
    cout << "Press 1 to enter details of student 1 !" << endl;
    cout << "Press 2 to enter details of student 2 !" << endl;
    cout << "Press 3 to calculate the aggregate of student 1 !" << endl;
    cout << "Press 4 to calculate the aggregate of student 2 !" << endl;
    cout << "Press 5 to display the student with roll no#1 !" << endl;
    cout << "Press 0 to EXIT !" << endl;
}
void pressAnyKey()
{
    string key;
    cout << "Press any key to continue... " << endl;
    cin >> key;
}
float std1aggregate(float matric, float inter, float ecat)
{

    float agg1 = ((matric / 1100) * 30) + ((inter / 550) * 30) + ((ecat / 400) * 40);
    return agg1;
}

float std2aggregate(float matric2, float inter2, float ecat2)
{

    float agg2 = ((matric2 / 1100) * 30) + ((inter2 / 550) * 30) + ((ecat2 / 400) * 40);
    return agg2;
}
