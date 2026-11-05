#include <stdio.h>

int x;

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    printf("Color: %d\n", RED);
    printf("Color: %d\n", GREEN);
    printf("Color: %d\n", BLUE);

    x = GREEN;
    printf("Selected color: %d\n", x);

    return 0;
}