#include <stdio.h>

int main(void) {
    int *a;
    int b;
    b = 3;
    a = &b;
    
    printf("add & sign before pointer: %d\n", &a);
    printf("the value of a as a memory address: %p\n", a);
}
