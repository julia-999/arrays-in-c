/* CS2211a 2020 */
/* Assignment number: 3 */
/* Your name: Julia Anantchenko */
/* Your student number: 251097696 */
/* Your UWO User Name: janantch */
/* Date Completed: Oct 20 2020 */

#include <stdio.h>

int main(void) 
{
    // BEGINNING

    int array[] = {12, 63, 44, 89, 3, 55, 73, 27, 37, 18, 11, 21, 31, 41, 51}; // initializing array
    int N = (int) ((sizeof(array)) / sizeof(array[0])); // calculating length of array

    printf("\nSize of array: %d bytes\n", (int) sizeof(array)); // prints the byte size of the array
    printf("Length of array: %d elements", N); // prints the size of the array

    // PART 1

    printf("\n\nPART 1:\n");
    printf("The values store into the array are :\n");

    for (int i = 0; i < N; i++) // goes through each array index and prints the values
        printf("   %d", (int) array[i]);

    // PART 2

    printf("\n\nPART 2:\n");
    printf("The values store into the array in reverse are :\n");

    for (int i = N-1; i >= 0; i--) // goes backwards through the array and prints the values
        printf("   %d", (int) array[i]);    

    // PART 3

    printf("\n\nPART 3:\n");
    printf("The smallest value stored in the array is :\n");

    int smallest = array[0]; // sets the initial smallest value to compare and update
    int position = 0; // initializes array index variable to update as the new smallest is found
    for (int i = 1; i < N; i++) // goes thorugh the array
    {
        if (array[i] < smallest) // if it finds a value less than the current smallest, switches the smallest value
        {
            smallest = array[i];
            position = i+1;
        }
    }

    printf("value: %d at the %dth position from the left", smallest, position);

    // PART 4

    printf("\n\nPART 4:\n");
    printf("The sum (total) value of the array is :\n");

    printf("%d", array[0]); // prints the first element of the array
    int sum = array[0]; // variable for the sum
    for (int i = 1; i < N; i++) // goes through the array
    {
        sum += array[i]; // adds onto the sum
        printf(" + %d", (int) array[i]); // prints the current element 
    }
    printf(" equals: %d", sum);

    // PART 5

    printf("\n\nPART 5:\n");
    printf("Copy the array into a new array, but in reverse order :\n");

    int array_reversed[N]; // declare new array
    for (int i = N-1; i >= 0; i--) // goes through the original array backwards
        array_reversed[N-1-i] = array[i]; // sets the reversed array to appropriate value

    printf("Original array : \n");

    for (int i = 0; i < N; i++) // goes through the original array and prints each element
        printf("   %d", (int) array[i]);

    printf("\nNew (Reversed) array : \n");

    for (int i = 0; i < N; i++) // goes thgough the reversed array and prints each element
        printf("   %d", (int) array_reversed[i]);

    // PART 6

    printf("\n\nPART 6:\n");
    printf("Switch the first value in the array with the last value in the array :\n");

    printf("Original array : \n");

    for (int i = 0; i < N; i++) // prints original array
        printf("   %d", (int) array[i]);

    printf("\nChanged array : \n");

    int temp = array[0]; // stores the value in the first index
    array[0] = array[N-1]; // changes the value in the first index to the one in the last index
    array[N-1] = temp; // changes the last index to the previous value of the first index

    for (int i = 0; i < N; i++) // prints new array
        printf("   %d", (int) array[i]);

    // PART 7

    printf("\n\nPART 7:\n");
    printf("Sort the array in ascending order :\n");

    printf("Original array : \n");

    for (int i = 0; i < N; i++) // prints the original array
        printf("   %d", (int) array[i]);

    printf("\nChanged array : \n");

    int changed = 1; // int that sees when the process is done
    while (changed == 1) // continues until there was no change from the for loop
    {
        changed = 0;
        for (int i = 0; i < N-1; i++) // compares each pair of indexes and switches them if necessary
        {
            if (array[i] > array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                changed = 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
        printf("   %d", (int) array[i]);

    // END

    return 0;

}