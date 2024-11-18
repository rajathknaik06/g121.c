/*Raveena is developing a program to analyze an integer array. Her task is to identify and tally the negative numbers within this array. This analysis is crucial for Raveena's dataset, as negative values might represent specific conditions or anomalies that require further investigation. 



Write a program that assists Raveena in counting and displaying the number of negative elements in an integer array. 

Input format :
The first line of input consists of an integer n, representing the number of elements in the array.

The second line of input consists of n space-separated integers, representing the elements of the array.

Output format :
If there are no negative elements in the array, the output prints "No negative elements in the array".

Otherwise, the output prints "Total negative elements in array = " followed by an integer which is the total count of negative elements in the array.

*/

#include <stdio.h>

int main() {
    int arr[20];
    int i, size, count = 0;

    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }

    if(count > 0) {
        printf("Total negative elements in array = %d", count);
    } else {
        printf("No negative elements in the array");
    }

    return 0;
}
