#include <stdio.h>
#include <limits.h>

int main (){
    int a, b, sum;

    a = 1;
    b = INT_MAX;
    sum = a + b;
    printf("%d", sum);
}