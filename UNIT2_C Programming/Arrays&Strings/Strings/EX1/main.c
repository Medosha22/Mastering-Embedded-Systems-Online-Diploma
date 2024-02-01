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
	char str[100] , c;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	int freq = 0;
	for(int i =0 ; i < strlen(str) ; i++)
	{
		if(str[i] == c)
		{
			freq++;
		}
	}
	 printf("Frequency of %c = %d\n", c, freq);
}

