#include <stdio.h>

#include <stdlib.h>

#include "tictactoe.h"


int compare_arrays(const int *p1, const int *p2, int length) {

    if (p1 == NULL || p2 == NULL) return 0;

    for (int i = 0; i < length; i++) {

        if (*(p1 + i) != *(p2 + i)) return 0;

    }

    return 1;

}


void swap(int *x, int *y) {

    int temp = *x;

    *x = *y;

    *y = temp;

}


void print_array(int *arr, int width, int height) {

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            printf("%d ", *(arr + (i * width) + j));

        }

        printf("\n");

    }

}


int main(void) {

    int n = 5;

    int *ptr_to_n = &n;

    (*ptr_to_n)++;

    printf("n: %d\n", n);


    int arr[3] = {10, 30, 2000};

    int *ptr_to_arr = arr;

    for (int i = 0; i < 3; i++) {

        printf("Element %d: %d, Addr: %p\n", i, *(ptr_to_arr + i), (void *)(ptr_to_arr + i));

    }


    int arr2[3] = {10, 30, 2000};

    printf("Compare: %d\n", compare_arrays(arr, arr2, 3));


    FILE *file = fopen("foo.txt", "r");

    if (file != NULL) {

        int sum = 0, num;

        while (fscanf(file, "%d", &num) == 1) {

            sum += num;

        }

        fclose(file);

        printf("Sum: %d\n", sum);

    }


    int a = 10, b = 20;

    swap(&a, &b);

    printf("Swap: a=%d, b=%d\n", a, b);


    int grid[2][3] = {{1, 2, 3}, {4, 5, 6}};

    print_array((int *)grid, 3, 2);


    char board[9];

    initialize_board(board);

    print_board(board);


    return 0;

}
