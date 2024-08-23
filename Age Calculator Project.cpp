// Josue Godoy
// 5/26/2024
// COP2000 Online

#include <iostream>
#include <string>
using namespace std;

int main()
{
            
            cout <<"**********************" << endl;
            cout <<"****Age Calculator****" << endl;
            cout <<"**********************" << endl;


    cout << "Please enter your name: " << endl;
    string name;
    cin >> name;

    // define variables
    int birthYear, currentYear, age;

    // get current year
    currentYear = 2024;

    cout << "Please enter your birth year: ";
    cin >> birthYear;
    
    // calculate age
    age = currentYear - birthYear;

    cout << "Hello, " << name << "! You are " << age << " years old!" << endl;

    return 0;
}
