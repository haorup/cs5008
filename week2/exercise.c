#include <stdio.h>

double calculateAverage( int arr[], int size) {
    int sum = 0;
    for ( int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum/ (double)size;
}

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    double average = calculateAverage(numbers, size);
    printf("Average of array is: %.2f\n", average);
}



