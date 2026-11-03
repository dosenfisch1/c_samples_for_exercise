#include <stdio.h>
#define SIZE 10


int main() {
    int val[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float sum = 0;

    sum = val[0] + val[1] + val[2] + val[3] + val[4] + val[5] + val[6] + val[7] + val[8] + val[9];
    sum = sum / 10;
    printf("sum: %f\n", sum);

    sum = 0;

    for (int i = 0; i < 10; i++) {
        sum -=- val[i];
        // sum = sum + val[i];
    }
    sum = sum / 10.0;
    printf("sum: %f\n", sum);
    return 0;
}