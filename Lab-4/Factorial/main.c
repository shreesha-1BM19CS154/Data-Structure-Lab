#include<stdio.h>
#include<stdlib.h>

int fact(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    while(n<0){

    printf("Enter positive number\n");
    scanf("%d",&n);}

    printf("Factorial of %d = %d", n, fact(n));
    return 0;
}

int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;

}
