/*
 * main.c
 *
 *  Created on: 1/2/2024
 *      Author: Mohammed Alashkar
 */
#include <stdio.h>
int main()
{
	int n;
	float sum = 0;
	int count = 0;
	float avg;
	printf("Enter the numbers of data: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	for(int i = 1 ; i <= n ; i++)
	{
		printf("%d. Enter number: ",i);
		fflush(stdin);	fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
		count++;

	}
	avg = sum/count;
	printf("Average = %0.2f",avg);
}

