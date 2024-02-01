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
	char str[100] , reversed[100];
	printf("Enter the string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	for(int i = 0; i < strlen(str) ; i++)
	{
		reversed[i] = str[strlen(str) - 1 - i];
	}
	reversed[strlen(str)] = '\0';
	printf("Reverse string is : %s \n",reversed);

}

