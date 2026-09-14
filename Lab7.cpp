/*
Write a program that will reverse a dynamic string array.

Write a function reverseArray() which receives a dynamic string array, 
reverses the elements, and returns a pointer to the modified array. 
The function does not output anything.

Write a function displayArray() which receives a dynamic string array, and outputs its elements.

In main(),
Call the two functions appropriately to reverse and output the array.

Use pointer notation rather than array notation for this assignment.
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 7 - Dynamic Arrays and Functions 2

#include <iostream>
#include <string>
using namespace std;

//For maximum array size
const int MAX_SIZE = 5;

//Prototypes
//reverseArray();
//displayArray();

int main(){

    //Creates array with a max size of 5
    string *stringArray = new string[MAX_SIZE];

    //List of names for the string with pointer notation
    *(stringArray + 0) = "Eduardo";
    *(stringArray + 1) = "Alec";
    *(stringArray + 2) = "Eman";
    *(stringArray + 3) = "Ron";
    *(stringArray + 4) = "John";


    return 0;
}

//Defintions