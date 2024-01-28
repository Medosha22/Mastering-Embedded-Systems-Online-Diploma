/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	float num;
	char choice;
	label:
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&num);
	if(num > 0)
		printf("%.1f is positive\n",num);
	else if(num < 0)
		printf("%.1f is negative\n",num);
	else
		printf("%.1f is neither positive nor negative\n",num);

	printf("Do you want to check again(y,n)");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	if(choice == 'y' || choice == 'Y')
		goto label;
	else
		return 0;
}

