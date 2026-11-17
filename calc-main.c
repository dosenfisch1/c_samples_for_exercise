#include <stdio.h>
#include "calc.h"

int main (){
    int a,b,sum,r = 0;
    char c;

    printf("gebe eine Zahl ein:\n");
    scanf("%d", &a);

    printf("gebe den rechenopoerator ein:\n");
    scanf(" %c", &c);

    printf("gebe die zweite Zahl ein:\n");
    scanf("%d", &b);

    printf("Rechnung: %d %c %d\n", a, c, b);

    calc(a, c, b, &sum, &r);

    if(r == 0){
        printf("Ergebnis: %d\n", sum);
    }
    else{
        printf("Unbekannter Operator: %c\n", c);
    }

    return 0;
}