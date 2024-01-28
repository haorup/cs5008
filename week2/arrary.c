#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* p_value = arr;

    printf( "p_value: %p\n", p_value);
    printf("arr[0]: %p\n", &arr);
    printf("arr: %p\n", &arr[0]);
    
    // int size = sizeof(arr) / sizeof(int)
    //
    // Accessing elements using idexes
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d, address: %p\n", *(p_value + i), (p_value + i));

    return 0;
}
