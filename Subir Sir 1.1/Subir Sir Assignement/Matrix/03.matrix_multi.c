#include <stdio.h>
#define r1 2
#define r2 3
#define r3 3
int main()
{
	int ar[r1][r2], arr[r2][r3],multi[r1][r3],i,j;
	printf("Enter 1st Matrix elements : \n");
	for(int i=0;i<r1;i++)
	{
		for(j=0;j<r2;j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}
	printf("Enter 2nd Matrix elements : \n");
	for(int i=0;i<r2;i++)
	{
		for(j=0;j<r3;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("Multiplication of given two matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<r3;j++)
		{
			multi[i][j] = 0;
			for(int k=0;k<r2;k++)
			{
				multi[i][j] += ar[i][k] * arr[k][j];
			}
		}
		
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<r3;j++)
		{
			printf("%d ", multi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
