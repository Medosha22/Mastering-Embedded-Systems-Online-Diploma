/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	char in , choice;

	label:

	printf("Enter an alphabet: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&in);
	if((in >= 'a' && in <= 'z' )||( in >= 'A' && in <= 'Z'))
		printf("%c is alphabet\n",in);
	else
		printf("%c is not an alphabet\n",in);

	printf("Do you want to check again(y,n)\n");
	fflush(stdin); fflush(stdout);
	scanf("%c ",&choice);
	switch(choice)
	{
	case 'y':
	case 'Y':
		goto label;
	default:
		return 0;
	}
}
