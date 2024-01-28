/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	char op;
	float num1,num2;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f \n %f",&num1,&num2);
	switch(op)
	{
	case '+':
	{
		printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
		break;
	}
	case '-':
	{
		printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
		break;
	}
	case '*':
	{
		printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
		break;
	}
	case '/':
	{
		printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
		break;
	}
	default:
		printf("Invalid operator");
		return 0;
	}
}

