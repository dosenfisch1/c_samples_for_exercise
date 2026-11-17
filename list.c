#include <stdio.h>

int main() {
    int liste[] = {10, 20, 30, 40};
    int x = liste[2];               // x wird 30
    printf("x: %d\n", x);

    printf("x: %d\n", liste[2]);


    for (int i = 0; i < sizeof(liste[0]); i++) {
        printf("liste[%d]: %d\n", i, liste[i]);
    }

    return 0;
}