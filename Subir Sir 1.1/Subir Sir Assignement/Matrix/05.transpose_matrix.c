#include <stdio.h>
int main()
{
	int arr[3][2],i,j;
	
	printf("Enter a Matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Entered Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}