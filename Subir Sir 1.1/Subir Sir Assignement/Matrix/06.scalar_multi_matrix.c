#include <stdio.h>
int main()
{
	int arr[2][2],i,j,scalar_value;
	printf("Enter a matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	printf("Enter the scalar value : ");
	scanf("%d", &scalar_value);
	printf("Scalar Matrix of given Matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ", scalar_value*arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}