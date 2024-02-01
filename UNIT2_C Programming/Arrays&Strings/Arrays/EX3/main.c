/*
 * main.c
 *
 *  Created on: 1/2/2024
 *      Author: Mohammed Alashkar
 */
#include <stdio.h>
int main()
{
	int r , c;
	printf("Enter rows and column of matrix: ");
	fflush(stdin); 		fflush(stdout);
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Enter elements of matrix: \n");
	for(int i = 0; i<r; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin); 		fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix: \n");
	for(int i = 0; i<r; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("===================================\n");
	printf("Transpose of Matrix: \n");
	for(int i = 0; i<c; i++)
	{
		for(int j=0 ; j<r ; j++)
		{
			printf("%d \t",a[j][i]);
		}
		printf("\n");
	}
}

