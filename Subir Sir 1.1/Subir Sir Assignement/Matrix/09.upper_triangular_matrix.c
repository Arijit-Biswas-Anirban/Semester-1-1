#include <stdio.h>
int main()
{
	int arr[3][3],i,j;
	printf("Enter a matrix : \n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Entered Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", arr[i][j]);	
		}
		printf("\n");
	}
	
	printf("Upper Triangular matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j < i)
			{
				arr[i][j] = 0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}