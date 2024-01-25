/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	float a , b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	// swapping using addition and subtraction
	a = a+b;
	b = a-b; //given a value
	a = a-b; //given b value
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.1f\n",b);
	return 0;
}

