/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	float num1,num2;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f \n %f",&num1,&num2);
	printf("Product: %f",num1*num2);
}

