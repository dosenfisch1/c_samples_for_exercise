#include <stdio.h>

// This function adds two integers and stores the result in the provided pointer.
int add(int x, int y, int *ergebnis) {
    *ergebnis = x + y;
    return *ergebnis;
}

int main(void) {
    int a, b, c;

    printf("eine Zahl eingeben: ");
    
    // reads an integer from the user and stores it in variable 'a'
    scanf("%d", &a);
    
    printf("eine weitere Zahl eingeben: ");
    scanf("%d", &b);

    add(a, b, &c);

    printf("Summe: %d\n", c);

    return 0;
}