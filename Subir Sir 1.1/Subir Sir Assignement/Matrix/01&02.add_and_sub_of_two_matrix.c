#include <stdio.h>
#define DI 3
int main()
{
	int ar[DI][DI], arr[DI][DI],add[DI][DI],sub[DI][DI];
	printf("Enter 1st Matrix elements : \n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}
	printf("Enter 2nd Matrix elements : \n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			add[i][j] = ar[i][j] + arr[i][j];
		}
	}
	printf("Addition of given two matrix : \n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			printf("%d ", add[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			sub[i][j] = ar[i][j] - arr[i][j];
		}
	}
	printf("Subtraction of given two matrix : \n");
	for(int i=0;i<DI;i++)
	{
		for(int j=0;j<DI;j++)
		{
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
