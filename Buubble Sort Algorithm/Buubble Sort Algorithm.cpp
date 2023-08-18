// Author: Prince Lesapo
// Program creates an array of size 20 and populates it with random digits, then it sorts the array in ascending order

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::setw;


void bubbleSort(int[], int);

void generateArr(int[], int);

void printingTheArr(int arr[], int);

int main()
{
    int arr[20];

    int sizeOfArr = 20;

    generateArr(arr, sizeOfArr);
    bubbleSort(arr, sizeOfArr);
    printingTheArr(arr, sizeOfArr);


    return 0;
}

//Function sorts the array in ascending order.
void bubbleSort(int arr[], int sizeOfArr)
{
    // holds the current value, if a swap is required.
    int hold;

    for (int pass = 0; pass < sizeOfArr - 1; pass++) {

        for (int i = 0; i < sizeOfArr - 1; i++)
        {

            if (arr[i] > arr[i + 1]) {
                // Swaps two elements
                hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}


// function generates random elements for the array
void generateArr(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        arr[i] = rand() % 100;
    }
}


// prints the individual elements of the array
void printingTheArr(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << setw(4) << arr[i];
    }
}