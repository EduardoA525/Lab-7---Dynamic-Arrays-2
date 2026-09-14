//Eduardo Avila
//COMSC - 210 - 5293
//Lab 7 - Dynamic Arrays and Functions 2

#include <iostream>
#include <string>
using namespace std;

//For maximum array size
const int MAX_SIZE = 5;

//Prototypes
void displayArray(string *stringArray, int size);
string *reverseArray(string *stringArray , int size);

int main(){
    //Creates array with a max size of 5
    string *stringArray = new string[MAX_SIZE];

    //List of names for the array with pointer notation
    *(stringArray + 0) = "Eduardo";
    *(stringArray + 1) = "Alec";
    *(stringArray + 2) = "Eman";
    *(stringArray + 3) = "Ron";
    *(stringArray + 4) = "John";

    cout << "Original Array: ";
    displayArray(stringArray, MAX_SIZE);

    //Reverse the array
    stringArray = reverseArray(stringArray, MAX_SIZE);

    cout << "Reversed Array: ";
    displayArray(stringArray, MAX_SIZE);

    //Delete the dynamic array because we're not HEATHENS.
    delete[] stringArray;

    return 0;
}

//Defintions

//Output array to console
void displayArray(string *stringArray, int size){
    //Loops through the entire array
    for (int i = 0; i < size; i++){
        //Like the previous Lab, as i goes up so does the array slot
        cout << *(stringArray + i) << " ";
    }

    cout << endl;
}

//Reverse array function
//Swap first and last, then go closer in the array until it hits the middle
string *reverseArray(string *stringArray, int size){
    //Loops only for half of the array
    for (int i = 0; i < size / 2; i++){
        //Saves the item from first half in tempString
        string tempString = *(stringArray + i);

        //Item from the second half gets put in the first half
        *(stringArray + i) = *(stringArray + (size - 1 - i));

        //Item from the first half (tempString) gets put in the second half 
        *(stringArray + (size - 1 - i)) = tempString;
    }
    //Do not output in this function
    return stringArray;
}