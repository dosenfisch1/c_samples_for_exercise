#include <stdio.h>
#include <time.h>


int main(){
    int x = 3;
    printf("int: %d\n", x);
    scanf("%d", &x);
    printf("int: %d", x);
    //delay(1000);
    fflush(stdout);

    float y = 3;
    printf("float: %f\n", y);
    scanf("%f", &y);
    printf("float: %5f\n", y);
}