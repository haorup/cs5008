#include <stdio.h>

int fibo(int n){
    if (n == 1 || n == 2) {
        return 1;
    }
    else {  return fibo(n-1) + fibo(n-2);}
}

int main(void) {
    int a = fibo(3);
    int b = fibo(4);
    int c = fibo(5);
    printf("%d\n%d\n%d\n", a, b, c);
}
