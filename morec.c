#include <stdio.h>

void readUserInput(int* agame_state);

int main(void) {
    int game_state = 0;

    readUserInput(&game_state);

    printf("game_state = %d\n", game_state);

    return 0;
}

void readUserInput(int* agame_state) {
    int bedingung;

    if (scanf("%d", &bedingung) == 1) {
        switch (bedingung) {
            case 12:
                printf("User wants up\n");
                break;
        }
    }
}