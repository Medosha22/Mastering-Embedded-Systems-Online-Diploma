/*
 * main.c
 *
 *  Created on: 1/2/2024
 *      Author: Mohammed Alashkar
 */

#include<stdio.h>
int main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	printf("Enter the elements of 1st matrix\n");
	for(int r = 1; r<=2; r++)
	{
		for(int c = 1; c<=2;c++)
		{
			printf("Enter a%d%d: ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(int r = 1; r<=2; r++)
	{
		for(int c = 1; c<=2;c++)
		{
			printf("Enter b%d%d: ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	for(int r = 1; r<=2; r++)
	{
		for(int c = 1; c<=2;c++)
		{
			sum[r][c] = a[r][c] + b[r][c];
		}
	}
	printf("Sum of matrix:\n");
	for(int r = 1; r<=2; r++)
	{
		for(int c = 1; c<=2;c++)
		{
			printf("%0.1f \t",sum[r][c]);
		}
		printf("\n");
	}
	return 0;
}
