/*
 * main.c
 *
 *  Created on: 1/25/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	float num1 , num2 , num3;
	char choice;
	label:
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f \n %f \n %f",&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
		printf("Largest number = %.2f\n",num1);
	else if(num2>num1&&num2>num3)
		printf("Largest number = %.2f\n",num2);
	else
		printf("Largest number = %.2f\n",num3);

	printf("Do you want to check again(y,n)");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	if(choice == 'y' || choice == 'Y')
		goto label;
	else
		return 0;
}

