#include <stdio.h>
#include <stdlib.h> // this library is needed for rand() function

int max(int *arr, int len);

int main () {
    int arr[10];

    // generate 10 random integers between 0 and 100 and append to arr
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 101;
    }
    
    int len = sizeof(arr) / sizeof(arr[0]);

    int maxVal = max(arr, len);
    printf("The max value in the array is %d\n", maxVal);
}

int max(int *arr, int len) {
    int maxVal = arr[0];

    for (unsigned int n = 0; n < len; n++) {
        if (arr[n] > maxVal) {
            maxVal = arr[n];
        }
    }

    return maxVal;
    }