#include <stdio.h>
#define OK 0
float TempF = 0;
float TempC = 0;
int step = 10;

int main (){
    printf("startwert eingeben:");
    scanf("%f", TempF);
    printf("schritweite eingeben:");
    scanf("%f", step);

    printf("Grad C \t Grad F\n");
    while (TempF <= 100){
        TempC = (5* (TempF -32)) /9;
        printf("%6.2f \t %6.2f\n",TempC, TempF);
        TempF= TempF + step;
    }

    TempF = 0;
    TempC = 0;
    printf("Grad F \t Grad C\n");
    while (TempF <= 100){
        TempC = (5* (TempF -32)) /9;
        printf("%6.2f \t %6.2f\n",TempF, TempC);
        TempF= TempF + step;
    }
    return OK;
}