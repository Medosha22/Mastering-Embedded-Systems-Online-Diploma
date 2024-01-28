/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	int sum = 0 , num;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	for(int i = 0 ; i <= num; i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}

