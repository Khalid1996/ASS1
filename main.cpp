// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 1
// Program: CS213-2018-A1-T1-P1(CASE)
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly / Khalid Mohammed Omar - Abdulilah Adam Abdi / Ahmad Samow Mohammed
// Date:    1 September 2018
// Version: 3.0

#include <iostream>
#include <iomanip>
#include <cassert>
#include "inclass.cpp"

int main(){
    matrix mat1,mat2;

    cout <<"Enter matrix 1 :"<<endl;
    cin >>mat1;

    cout <<"Enter matrix 2 :"<<endl;
    cin >>mat2;

    cout << (mat1 + mat2) <<endl;
}