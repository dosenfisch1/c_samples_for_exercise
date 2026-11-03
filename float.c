#include <stdio.h>

int main() { 
    float a = 10e20; 
    float b = 10;
    float c = 19;
    float d = 120;

printf("a: %4f\n", a);
printf("b: %4f c: %4f d:%4f\n", b, c, d); printf("a - a + c - b + d=%3.2f\n", a - a + c - b + d); printf("a + c - b + d - a=%3.2f\n", a + c - b + d - a); printf("a + c - a - b + d=%3.2f\n", a + c - a - b + d); printf("a + c - d - a - b=%3.2f\n", a + c - d - a - b); printf("1.0-0.1-0.1-0.1-0.1-0.1==0.5?%d\n", 1.0 - 0.1 - 0.1 - 0.1 - 0.1 - 0.1==0.5); printf("0.5==0.5?%d\n", 0.5==0.5);

}