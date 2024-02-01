/*
 * main.c
 *
 *  Created on: 1/2/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	int i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	printf("Length of string: %d",i);
}

