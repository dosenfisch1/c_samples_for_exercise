#include <stdio.h>

int x;

enum Color {
    RED,
    GREEN,
    BLUE
};



void test_enum() {
    enum Color color = RED;
    printf("Initial color: %d\n", color);

    color = BLUE;
    printf("Changed color: %d\n", color);
}

int main() {
    printf("Color: %d\n", RED);
    printf("Color: %d\n", GREEN);
    printf("Color: %d\n", BLUE);

    x = GREEN;
    printf("Selected color: %d\n", x);

    test_enum();

    return 0;
}