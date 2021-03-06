// File: Galaxy_Hw3_Task2
// Created by Brian Walter on 9/30/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;

// Constants

// Classes
class serial{
private:
    int serialNumber;
    static int counter;
public:
    serial(){
        counter++;
        serialNumber = counter;
    };
    void showSerial();
};
int serial::counter = 0;

// Prototypes
void displaySerial(serial);

// Main Program Program
int main(void) {
    serial alpha, beta, gamma;

    displaySerial(alpha);
    displaySerial(beta);
    displaySerial(gamma);

    return 0;
}
//Function Definitions
void serial::showSerial() {
    cout << "Object Number: " << serialNumber << endl;
}

void displaySerial(serial s1){
    s1.showSerial();
}