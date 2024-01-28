/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	long long factorial = 1;
	int num;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	if(num > 0)
	{
	for(int i = 1 ; i <= num ; i++)
	{
		factorial *= i;
	}
	printf("Factorial = %I64d\n",factorial);
	}
	else if(num < 0)
		printf("Error!!! Factorial of negative number dosn't exist");
	else
		printf("Factorial of %d is = 1",num);
}


