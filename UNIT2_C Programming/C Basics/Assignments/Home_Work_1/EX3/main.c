/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	int num1 , num2;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d \n %d",&num1,&num2);
	printf("Sum: %d",num1+num2);

}

