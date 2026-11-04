#include <stdio.h>
int list[3] = {1, 2, 3};
int num = 010;
char array[6] = "Hello";
char array2[6] = {72,101,108,108,111,0};

int main() {
    printf("array: %s\n", array);
    printf("array2: %s\n", array2);

    for (int i = 0; i < 15; i++) {
        printf("list[%d]: %d\n", i, list[i]);
    }

    puts (&array[0]);
    puts (&array[2]);
    puts (&array[3]);

    printf("num: %d\n", num);

    printf("%d\n", list[2]);
    return 0;
}