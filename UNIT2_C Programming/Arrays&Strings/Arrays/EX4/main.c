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
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i<n ; i++)
	{
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&a[i]);
	}
	int e , l;
	printf("Enter the element to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &e);
	printf("Enter the location : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &l);
	if (l <= n + 1 && l > 0) {
		for (int i = n; i >= l; i--) {
			a[i] = a[i - 1];
		}
		a[l - 1] = e;
		printf("Array after insertion: ");
		for (int i = 0; i < n + 1; i++)
		{
			printf("%d ", a[i]);
		}
	}
	else
		printf("Invalid location entered.");

}

