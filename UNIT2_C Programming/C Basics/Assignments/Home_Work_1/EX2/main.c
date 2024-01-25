/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    printf("You entered: %d\n", num);

    return 0;
}
