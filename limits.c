#include <limits.h>
#include <stdio.h>


int main () {
   int a, b, sum;
   a = 011;
   b = INT_MAX;
   sum = a + b;
   printf("Summe %d + %d ist: %d\n", a, b, sum);
   printf("%03zu",sizeof(a)*8);

}