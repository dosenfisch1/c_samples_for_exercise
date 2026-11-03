#include <stdio.h>

int array[3] = {1,2};

int main(){
    array[2] = array[0] + array[1];
    printf("int: %d\n", array[2]);
}