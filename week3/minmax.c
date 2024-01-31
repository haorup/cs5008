#include <stdio.h>

#define N 5

void max_min(int a[], int n, int* max, int* min);

int main(void) {
    int b[N] = {8, 10, 11, 3, 7};
    int big, small;

    // Print memory addresses of big and small
    printf("Inside main: &big = %p, &small = %p\n", &big, &small);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

// This function finds the largest and smallest elements in an array
// a: array of integers
// n: number of elements in array
// max: pointer to largest element (output)
// min: pointer to smallest element (output)
void max_min(int a[], int n, int* max, int* min) {
    // TODO: Complete this function
}
