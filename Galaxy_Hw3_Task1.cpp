// File: Galaxy_Hw3_Task2
// Created by Brian Walter on 9/30/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;

// Constants

// Prototypes

// Classes
class date{
public:
    int month;
    int day;
    int year;
    void getDate();
    void showDate();
};

// Main Program Program
int main(void) {


    return 0;

}
// Function Definitions
void date::getDate() {
    //Variables to store date values
    int a,b,c;
    char tempchar;

    //Prompt the user for the date and store it
    cout << "Enter a date (format 12/31/1999): ";
    cin >> a >> tempchar >> b >> tempchar >> c;

    //Assign the date to appropriate class variables
    month = a;
    day = b;
    year = c;

    //Return control of the program
    return;
}

void date::showDate() {
    cout << month << "/" << day << "/" << year << endl;
}