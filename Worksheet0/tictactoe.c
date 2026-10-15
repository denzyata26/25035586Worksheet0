#include <stdio.h>

#include "tictactoe.h"


void initialize_board(char *board) {

    for (int i = 0; i < 9; i++) {

        *(board + i) = ' ';

    }

}


void print_board(char *board) {

    printf("\n");

    for (int i = 0; i < 3; i++) {

        printf(" %c | %c | %c \n", *(board + i*3), *(board + i*3 + 1), *(board + i*3 + 2));

        if (i < 2) printf("---|---|---\n");

    }

    printf("\n");

}


int check_win(char *board) {

    for (int i = 0; i < 3; i++) {

        if (*(board + i*3) != ' ' && *(board + i*3) == *(board + i*3 + 1) && *(board + i*3 + 1) == *(board + i*3 + 2))

            return 1;

    }

    for (int i = 0; i < 3; i++) {

        if (*(board + i) != ' ' && *(board + i) == *(board + i+3) && *(board + i+3) == *(board + i+6))

            return 1;

    }

    if (*(board + 0) != ' ' && *(board + 0) == *(board + 4) && *(board + 4) == *(board + 8))

        return 1;

    if (*(board + 2) != ' ' && *(board + 2) == *(board + 4) && *(board + 4) == *(board + 6))

        return 1;

    return 0;

}
