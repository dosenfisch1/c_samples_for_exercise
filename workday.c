#include<stdio.h>
#include<stdbool.h>

typedef enum days days_t;
enum days {
    MO = 1, TU, WE, TH, FR, SA, SU
};


int main() {
    days_t wd;
    //enum days wd;

    printf("Enter a number (1-7) to represent a day of the week: ");
    scanf("%d", &wd);
    
    switch(wd) {
        case MO:
        case TU:
        case WE:
        case TH:
        case FR:
            printf("workday\n");
            break;
        
        case SA ... SU:
            printf("weekend\n");
            break;
        
        default:
            printf("Invalid input\n");
            break;
    }
    return 0;
}
