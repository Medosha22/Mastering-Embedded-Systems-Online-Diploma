/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */

#include<stdio.h>

int main() {
	int num;
	char choice;

	lable:

	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("%d is even\n", num);
	} else {
		printf("%d is odd\n", num);
	}

	printf("Do you want to check again? (y/n) ");
	fflush(stdout);
	scanf(" %c", &choice);

	if (choice == 'y' || choice == 'Y') {
		goto lable;
	} else {
		return 0;
	}
}
