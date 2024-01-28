/*
 * In this file, two integers can be swapped by
 * calling function swap().
*/
#include <stdio.h>

// define swap function NOT WORKING
int swap( int* pointer_a, int* pointer_b) {
    int value_a = *pointer_a;
    int value_b = *pointer_b;
    value_a = *pointer_b;
    value_b = *pointer_a;
    return 0;
}

// define swap function WORKING
int swap2( int* pointer_a, int* pointer_b) {
    int value_a = *pointer_a;
    int value_b = *pointer_b;
    *pointer_a = value_b;
    *pointer_b = value_a;
    return 0;
}

// easy way to do swap
void swap3( int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// define swap function NOT WORKING
void swap4( int a, int b){
    int* p_a = &a;
    int* p_b = &b;
    *p_a = b;
    *p_b = a;
}

int main(void) {
      int a = 17;
      int b = -4;
      printf("value of a is: %d\n", a);
      printf("value of b is: %d\n", b);
  
//    swap(&a, &b);
//    printf("value of a is: %d\n", a);
//    printf("value of b is: %d\n", b);
//
    
//    swap2(&a, &b);
//    printf("value of a is: %d\n", a);
//    printf("value of b is: %d\n", b);
//    return 0;
      
      swap4(a, b);
      printf("%d\n", a);
      printf("%d\n", b);
      return 0;
}

