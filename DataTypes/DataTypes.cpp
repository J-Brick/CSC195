// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>

using namespace std;
namespace jon {
    int i = 10;
    void f() {}

}

int main() {

    string name;
    int age = 0;
    double wage = 0;
    bool IsAdult;
    char initial;
    int zipcode = 0;
    int DaysWorked = 0;
    int HoursPerDay[7];
    int TotalHours = 0;
    const float TAX = 0.085;

    HoursPerDay[0];
    HoursPerDay[1];
    HoursPerDay[2];
    HoursPerDay[3];
    HoursPerDay[4];
    HoursPerDay[5];
    HoursPerDay[6];

    float gross ;
    float Net ;

    //name
    cout << "Enter your name: ";
    cin >> name;
    //first initial of last name
    cout << "last name initial: ";
    cin >> initial;
    //age
    cout << "what is your age: ";
    cin >> age;
    IsAdult = (age > 18);
    //zipecode
    cout << "what is your zip code: ";
    cin >> zipcode;
    //wage
    cout << "enter wage: ";
    cin >> wage;
    //how many days you worked
    cout << "enter days worked: ";
    cin >> DaysWorked;

    for (int i = 0; i < DaysWorked; i++) {
        
            cout << "enter hours worked for day " << i << ": ";
            cin >> HoursPerDay[i];

            TotalHours += HoursPerDay[i];
        }

        cout << name << " worked " << TotalHours << " hours this week at " << wage << " dollars per hour.\n";

        gross = TotalHours * wage;
        Net = gross * (1 - TAX);
        
        cout << "$" << gross << endl;

        cout << "$" << Net << endl;

        return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
