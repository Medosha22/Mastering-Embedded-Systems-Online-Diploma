/*
 * main.c
 *
 *  Created on: 1/2/2024
 *      Author: Mohammed Alashkar
 */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i<n ; i++)
	{
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &a[i]);
	}
	int s ;
	printf("Enter the element to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &s);
	for(int i =0 ; i<n ; i++)
	{
		if(a[i] == s)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}
}

