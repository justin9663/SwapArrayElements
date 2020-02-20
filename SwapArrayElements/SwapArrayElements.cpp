// SwapArrayElements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

/************************************************
**  Simplae program that swaps an arrays front  *
**  and back elements and prints the before     *
**  array and the after array.                  *
************************************************/

//Swap function array
void SwapArrayEnds(int sortArray[], int numElements) {
    int temp = sortArray[numElements - 1];
    sortArray[numElements - 1] = sortArray[0];
    sortArray[0] = temp;

    return;
}

// Call to main that calls the function and prints the values
int main()
{
    const int NUM_ELEMENTS = 4;         //Set the array element amount
    int arrayToSort[NUM_ELEMENTS];      //Initialize the array to swap
    int i = 0;                          //Initialize a variable for iterating 

    //Set up the array with sudo random elements
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        arrayToSort[i] = (i * 10) + (rand() % 20);
    }

    //Print the array before the swap
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << "Item at " << i << " is " << arrayToSort[i] << endl;
    }

    //Call the function to swap the elements
    SwapArrayEnds(arrayToSort, NUM_ELEMENTS);

    //Print the new array with elements swapped
    cout << "The new array is: " << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << "Item at " << i << " is " << arrayToSort[i] << endl;
    }

    return 0;
}

