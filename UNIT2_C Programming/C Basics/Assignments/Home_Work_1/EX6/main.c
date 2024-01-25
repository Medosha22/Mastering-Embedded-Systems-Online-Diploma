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
	float temp=a; //temporary variable to swap values
	a=b; //swap value of a to b
	b=temp; //swap value of b to a
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.1f\n",b);
	return 0;
}

