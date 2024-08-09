#include<stdio.h>

int factorial(int n);

int main () {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n<0) {
        printf("Factorial is not defined for negative numbers.\n");

    } else {
        printf("Factorial is : %d", factorial(n));

    }
}
int factorial(int n) {
    if (n==0 || n==0) {
        return  1;
    }

    return n * factorial(n-1);
}
